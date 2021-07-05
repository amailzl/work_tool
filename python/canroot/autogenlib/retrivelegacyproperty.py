import os
import os.path
from autogenlib.fileope import *
from autogenlib.tokemapbuilder import tokenmapbuilder

class retrivelegacyproperty(object):
	"""docstring for retrivelegacyproperty"""
	env=None
	legacy_class_root=""
	m_excelhelper=None

	legacy_managers={}
	legacy_managers["PatacCarCustomizationManager"]="/customization/PatacCarCustomizationManager.java"
	legacy_managers["PatacCarVehicleControlManager"]="/vehicleControl/PatacCarVehicleControlManager.java"
	legacy_managers["PatacCarVehicleStatusManager"]="/vehicleStatus/PatacCarVehicleStatusManager.java"
	legacy_managers["PatacCarHvacManager"]="/hvac/PatacCarHvacManager.java"

	hals={}
	hals["PatacProperty"]="/vendor/patac/interfaces/vehicle/1.0/types.hal"
	hals["VendorProperty"]="/gmplatform/hardware/interfaces/vehicle/1.0/types.hal"
	hals["VehicleProperty"]="/hardware/interfaces/automotive/vehicle/2.0/types.hal"

	def __init__(self, env, excelhelper):
		super(retrivelegacyproperty, self).__init__()
		self.env=env
		self.legacy_class_root = self.env.get_aosp_root()+"/vendor/patac/frameworks/base/core/java/patac/car/carproperty"
		self.m_excelhelper=excelhelper

	def retrive_from_legacy_class(self):
		tkbuilder=tokenmapbuilder()

		for manager in self.legacy_managers:
			print(self.legacy_class_root+self.legacy_managers[manager])
			fd = get_file(self.legacy_class_root+self.legacy_managers[manager])
			fd.seek(0, 0)

			for line in fd.readlines():
				if(is_property_field(line)) :
					tk=tkbuilder.set_legacy(manager, line).get_token_map()
					self.m_excelhelper.write_property(tk)
			close_file(fd)

	def retrive_from_hal(self):
		tkbuilder=tokenmapbuilder()

		self.m_excelhelper.hal_name_reset()
		for hal in self.hals:
			print(self.env.get_aosp_root()+self.hals[hal])
			fd = get_file(self.env.get_aosp_root()+self.hals[hal])
			fd.seek(0, 0)

			phase=0
			property_encounter=0
			for line in fd.readlines():
				# if(hal_start(line) or hal_end(line)):
				# 	phase=phase+1
				# if(phase==0):
				# 	continue
				# elif(phase==1):
				if(hal_property_enconter(line) or property_encounter > 0) :
					if property_encounter == 0 :
						tk=tkbuilder.set_property_id(get_hal_property(line))
						property_encounter=1
					elif property_encounter == 1 :
						tk=tkbuilder.set_extra(get_hal_signal(line))
						property_encounter=2
					elif property_encounter == 2 :
						tk=tkbuilder.set_property_group(get_hal_property_group(line))
						property_encounter=3
					elif property_encounter == 3 :
						tk=tkbuilder.set_real_type(get_hal_type(line)).set_value_type(get_hal_type(line))
						property_encounter=4
					elif property_encounter == 4 :
						tk=tkbuilder.set_default_zone(get_hal_area(line))
						property_encounter=0
						tk.tokenparser()
						tk.set_property_namespace(hal)
						self.m_excelhelper.write_hal_property(tk.get_token_map())
						tk.reset()
				# elif(phase==2):
				# 	break
			close_file(fd)

	# def retrive_from_legacy_excel(self):
