# for property class auto-gen, class fields must be specified
# this class aim for generate java style property class name and method name from property name
# relative fields :
#		class_name (auto-gen)
#		property_ID (must)
#		property_namespace (must)
#		value_type (must)
#		opename (auto-gen)
#		default_zone (must if not customize)
from autogenlib.fileope import get_property_ns
from autogenlib.fileope import get_property_id

class tokenmapbuilder(object):
	"""docstring for tokenmapbuilder"""
	mtokenmap = {}
	mtokenmap["#custom_area_id_enabled"]=1
	mtokenmap["#set_enabled"]=1
	mtokenmap["#auto_gen_enabled"]=1
	mtokenmap["#class_name"]=""
	mtokenmap["#property_ID"]=""
	mtokenmap["#property_namespace"]=""
	mtokenmap["#opename"]=""
	mtokenmap["#value_type"]="boolean"
	mtokenmap["#custom_area"]=""
	mtokenmap["#comma"]=""
	mtokenmap["#default_zone"]=""
	mtokenmap["#legacy"]=""
	mtokenmap["#real_type"]=""
	mtokenmap["#extra"]=""
	mtokenmap["#category"]=""
	mtokenmap["#area"]=""
	mtokenmap["#WRAPPER"]=""

	category_list=['AIR_QUALITY',\
					'CUSTOM_MODE',\
					'PERSONAL_MODE',\
					'DRIVE_MODE',\
					'PERFORMANCE_MODE',\
					'COMFORT_MODE',\
					'ONE_PEDAL_DRIVING',\
					'HVAC',\
					'LANE',\
					'DOOR',\
					'SEAT',\
					'LAMP',\
					'WINDOW',\
					'WIPER',\
					'SUNSHADE',\
					'SUNROOF',\
					'SUNBLIND',\
					'INTERIOR_DIMMING',\
					'DOME_LIGHT',\
					'HIGH_BEAM',\
					'AMBIENT_LIGHT',\
					'FOG_LIGHTS'\
					'STEERING_WHEEL',\
					'ADAS',\
					'NAVIGATION',\
					'FUEL',\
					'ENGINE',\
					'TIRE',\
					'BRAKE',\
					'ROTOR',\
					'HILL',\
					'TPMS',\
					'TRACTION_AND_STABILITY',\
					'V_2_X',\
					'TRAFFIC',\
					'MODEL'
					]

	class_list={}
	class_list["HavcController"]="HVAC"
	class_list["DriveController"]="LANE||ADAS||ONE_PEDAL_DRIVING||"
	class_list["Powertain"]="ENGINE||OIL||BATTERY"
	class_list["SeatController"]="SEAT"
	class_list["AmbientLightController"]="AMBIENT_LIGHT"
	class_list["BodyController"]="WINDOW||DOOR||SUN"
	class_list["VehicleLightControl"]="DOME_LIGHT||INTERIOR_DIMMING||INTERIOR_AMBIENT||HIGH_BEAM||LAMP"
	class_list["ModeControl"]="CUSTOM_MODE||PERFORMANCE_MODE||DRIVE_MODE||PERSONAL_MODE"
	class_list["VehicleInfo"]="MODEL||INFO"

	def __init__(self):
		super(tokenmapbuilder, self).__init__()

	def tokenparser(self):
		# auto gen class name from property name
		# basic auto-gen rule : remove "_" and upper case every first letter
		if "SIGNAL_GROUP" in self.mtokenmap["#property_ID"]:
			items=self.mtokenmap["#property_ID"].split("SIGNAL_GROUP")
			for item in items[0].split("_"):
				self.mtokenmap["#category"]=self.mtokenmap["#category"]+item.capitalize()
			for item in items[1].split("_"):
				self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+item.capitalize()
		else :
			m_category=[]
			count_category=0
			for item in self.category_list:
				if item in self.mtokenmap["#property_ID"]:
					m_category.append(item)
					count_category=count_category+1

			# if no category found, auto gen cate
			if count_category == 0:
				holder = []
				count = 0
				for str in self.mtokenmap["#property_ID"].split("_"):
					holder.append(self.mtokenmap["#class_name"]+str.capitalize())
					count = count+1

				if count < 4 :
					self.mtokenmap["#category"]=holder[0]
					for item in holder :
						self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+item
				elif count < 7 :
					self.mtokenmap["#category"]=holder[0] + holder[1]
					index=2
					while index < count:
						self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+holder[index]
						index=index+1
				else :
					self.mtokenmap["#category"]=holder[0] + holder[1] + holder[2]
					index=3
					while index < count :
						self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+holder[index]
						index=index+1
			else :
				usr_selection=self.narrow_down_category(m_category)
				for item in usr_selection.split("_"):
					self.mtokenmap["#category"]=self.mtokenmap["#category"]+item.capitalize()
				print("category : [ " +self.mtokenmap["#category"] + " ] has been choosen ")
				items=self.mtokenmap["#property_ID"].split(usr_selection)
				for item in items[0].split("_"):
					self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+item.capitalize()
				for item in items[1].split("_"):
					self.mtokenmap["#opename"]=self.mtokenmap["#opename"]+item.capitalize()


		self.mtokenmap["#opename"]=self.aggressive_build_rule(self.mtokenmap["#opename"])
		self.mtokenmap["#class_name"]=self.mtokenmap["#opename"]+"Property"
		print("autogen category : "+self.mtokenmap["#category"]+",  class_name : "+self.mtokenmap["#class_name"])



	def narrow_down_category(self, m_category_list):
		if(len(m_category_list) == 1) :
			return m_category_list[0]
		else :
			print("***********************************")
			print("find multiple suitable category while parsering property : " + self.mtokenmap["#property_ID"])
			count=1
			for item in m_category_list:
				print(str(count) + " : " + item)
				count=count+1
			usr_select=input("please choose a category : ")
			return m_category_list[self.check_user_input(int(usr_select), count)]

	def check_user_input(self, input, count):
		if input > 0  and input < count :
			return input-1
		else :
			print("not a valid input,choose first category by default")
			return 0

	def aggressive_build_rule(self, str):
		return str.replace("AdaptiveCruiseControl", "ACC")\
				.replace("AdvancedParkAssist", "APA")\
				.replace("AutoHold", "AVH")\
				.replace("AutoVehicleHold", "AVH")\
				.replace("Customization", "")\
				.replace("System", "Sys")\
				.replace("Navigation", "Navi")\
				.replace("Request", "Req")\
				.replace("Rear", "Rr")\
				.replace("Front", "Ft")\
				.replace("Left", "Lt")\
				.replace("Right", "Rt")\
				.replace("Position", "Pos")\
				.replace("Percentage", "Percent")\
				.replace("Control", "Ctrl")\
				.replace("Configuration", "Config")\
				.replace("First", "1st")\
				.replace("Second", "2nd")\
				.replace("Third", "3rd")\
				.replace("Level", "Lv")\
				.replace("Ambient", "Am")\
				.replace("Brightness", "")\
				.replace("Color", "")\
				.replace("Automatic", "Auto")\
				.replace("SignalGroup", "")\

	def check_input(self):
		if ((self.mtokenmap["#property_ID"] == "") or (self.mtokenmap["#property_namespace"] == "")) :
			print("Error : unknown property_ID or namespace")
			exit(1)
		if (self.mtokenmap["#value_type"] == ""):
			print("Error : unknown Value type")
			exit(1)
		if (self.mtokenmap["#custom_area_id_enabled"] == 0) and (self.mtokenmap["#default_zone"] == "") :
			print("Error : default area should be set")
			exit(1)

	def get_token_map(self):
		# self.tokenparser()
		return self.mtokenmap

	def get_token_map_and_check(self):
		self.check_input()
		if self.mtokenmap["#custom_area_id_enabled"]==1:
			self.mtokenmap["#custom_area"]="int area"
			self.mtokenmap["#default_zone"]="area"
			self.mtokenmap["#comma"] = ", "
			self.mtokenmap["#area"] = " + area"
		return self.mtokenmap

	def set_class_name(self, class_name):
		self.mtokenmap["#class_name"] = class_name
		return self

	def set_area(self, area):
		self.mtokenmap["#area"] = area
		return self

	def set_category(self, category):
		self.mtokenmap["#category"] = category
		return self

	def set_property_id(self, property_ID):
		self.mtokenmap["#property_ID"] = property_ID
		return self

	def set_property_namespace(self, property_namespace):
		self.mtokenmap["#property_namespace"] = property_namespace
		return self

	def set_value_type(self, value_type):
		self.mtokenmap["#value_type"] = value_type
		return self

	def set_enabled(self, set_enabled):
		self.mtokenmap["#set_enabled"]=int(set_enabled)
		return self

	def set_opename(self, opename):
		self.mtokenmap["#opename"] = opename.replace("(set/get)", "")
		return self

	def set_real_type(self, real_type):
		self.mtokenmap["#real_type"] = real_type
		return self

	def set_auto_gen_enabled(self, auto_gen_enabled):
		self.mtokenmap["#auto_gen_enabled"] = int(auto_gen_enabled)
		return self

	def set_custom_area_id_enabled(self, custom_area_id_enabled):
		self.mtokenmap["#custom_area_id_enabled"] = int(custom_area_id_enabled)
		return self

	# def set_comma(self, comma):
	# 	self.mtokenmap["#comma"] = comma
	# 	return self

	def set_default_zone(self, default_zone):
		self.mtokenmap["#default_zone"] = default_zone
		return self

	def set_extra(self, extra):
		self.mtokenmap["#extra"] = extra
		return self

	def set_property_group(self, property_group):
		self.mtokenmap["#legacy"] = property_group
		return self

	def set_legacy(self, legacy, line) :
		self.reset()
		self.mtokenmap["#legacy"]=legacy
		self.mtokenmap["#property_ID"]=get_property_id(line)
		self.mtokenmap["#property_namespace"]=get_property_ns(line)
		self.tokenparser()

		return self

	# def read_legacy(self,legacy):
	# 	self.reset()
	# 	self.set_category(legacy[pt_st_cols["at_gen_category"]]).\
	# 		set_class_name(legacy[1]).\
			# set_opename(legacy[2])
			# set_property_id()

	def reset(self):
		self.mtokenmap["#custom_area_id_enabled"]=1
		self.mtokenmap["#set_enabled"]=1
		self.mtokenmap["#auto_gen_enabled"]=1
		self.mtokenmap["#class_name"]=""
		self.mtokenmap["#property_ID"]=""
		self.mtokenmap["#property_namespace"]=""
		self.mtokenmap["#opename"]=""
		self.mtokenmap["#value_type"]="boolean"
		self.mtokenmap["#custom_area"]=""
		self.mtokenmap["#comma"]=""
		self.mtokenmap["#default_zone"]=""
		self.mtokenmap["#legacy"]=""
		self.mtokenmap["#real_type"]=""
		self.mtokenmap["#extra"]=""
		self.mtokenmap["#category"]=""
		self.mtokenmap["#area"]=""
		self.mtokenmap["#WRAPPER"]=""
