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

class propertymapbuilder(object):
	"""docstring for propertymapbuilder"""
	mpropertymap = {}
	mpropertymap["#custom_area_id_enabled"]=1
	mpropertymap["#access"]=1
	mpropertymap["#auto_gen_enabled"]=1
	mpropertymap["#class_name"]=""
	mpropertymap["#property_ID"]=""
	mpropertymap["#property_namespace"]=""
	mpropertymap["#opename"]=""
	mpropertymap["#value_type"]="boolean"
	mpropertymap["#custom_area"]=""
	mpropertymap["#comma"]=""
	mpropertymap["#default_zone"]=""
	mpropertymap["#legacy"]=""
	mpropertymap["#real_type"]=""
	mpropertymap["#extra"]=""
	mpropertymap["#category"]=""
	mpropertymap["#area"]=""
	mpropertymap["#WRAPPER"]=""


	def get_token_map(self):
		# self.tokenparser()
		return self.mpropertymap

	def get_token_map_and_check(self):
		self.check_input()
		if self.mpropertymap["#custom_area_id_enabled"]==1:
			self.mpropertymap["#custom_area"]="int area"
			self.mpropertymap["#default_zone"]="area"
			self.mpropertymap["#comma"] = ", "
			self.mpropertymap["#area"] = " + area"
		return self.mpropertymap

	def set_class_name(self, class_name):
		self.mpropertymap["#class_name"] = class_name
		return self

	def set_area(self, area):
		self.mpropertymap["#area"] = area
		return self

	def set_category(self, category):
		self.mpropertymap["#category"] = category
		return self

	def set_property_id(self, property_ID):
		self.mpropertymap["#property_ID"] = property_ID
		return self

	def set_property_namespace(self, property_namespace):
		self.mpropertymap["#property_namespace"] = property_namespace
		return self

	def set_value_type(self, value_type):
		self.mpropertymap["#value_type"] = value_type
		return self

	def access(self, access):
		self.mpropertymap["#access"]=int(access)
		return self

	def set_opename(self, opename):
		self.mpropertymap["#opename"] = opename.replace("(set/get)", "")
		return self

	def set_real_type(self, real_type):
		self.mpropertymap["#real_type"] = real_type
		return self

	def set_auto_gen_enabled(self, auto_gen_enabled):
		self.mpropertymap["#auto_gen_enabled"] = int(auto_gen_enabled)
		return self

	def set_custom_area_id_enabled(self, custom_area_id_enabled):
		self.mpropertymap["#custom_area_id_enabled"] = int(custom_area_id_enabled)
		return self

	# def set_comma(self, comma):
	# 	self.mpropertymap["#comma"] = comma
	# 	return self

	def set_default_zone(self, default_zone):
		self.mpropertymap["#default_zone"] = default_zone
		return self

	def set_extra(self, extra):
		self.mpropertymap["#extra"] = extra
		return self

	def set_property_group(self, property_group):
		self.mpropertymap["#legacy"] = property_group
		return self

	def set_legacy(self, legacy, line) :
		self.reset()
		self.mpropertymap["#legacy"]=legacy
		self.mpropertymap["#property_ID"]=get_property_id(line)
		self.mpropertymap["#property_namespace"]=get_property_ns(line)
		self.tokenparser()

		return self

	# def read_legacy(self,legacy):
	# 	self.reset()
	# 	self.set_category(legacy[pt_st_cols["at_gen_category"]]).\
	# 		set_class_name(legacy[1]).\
			# set_opename(legacy[2])
			# set_property_id()

	def reset(self):
		self.mpropertymap["#custom_area_id_enabled"]=1
		self.mpropertymap["#access"]=1
		self.mpropertymap["#auto_gen_enabled"]=1
		self.mpropertymap["#class_name"]=""
		self.mpropertymap["#property_ID"]=""
		self.mpropertymap["#property_namespace"]=""
		self.mpropertymap["#opename"]=""
		self.mpropertymap["#value_type"]="boolean"
		self.mpropertymap["#custom_area"]=""
		self.mpropertymap["#comma"]=""
		self.mpropertymap["#default_zone"]=""
		self.mpropertymap["#legacy"]=""
		self.mpropertymap["#real_type"]=""
		self.mpropertymap["#extra"]=""
		self.mpropertymap["#category"]=""
		self.mpropertymap["#area"]=""
		self.mpropertymap["#WRAPPER"]=""
