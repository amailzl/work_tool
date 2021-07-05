# this class aiming to set up filepath
import os
import os.path

class setupenv(object):
	"""docstring for setupenv"""
	aosp_root=""
	script_root=""
	wrapper_root=""
	wrapper_test_root=""
	def __init__(self):
		super(setupenv, self).__init__()
		self.script_root=os.popen("pwd").read().replace("\n", "")


	def create_can_root(self):
		self.check_aosp_root()
		srcpath=self.aosp_root + "/vendor/patac/frameworks/base/core/java/patac/car/hardware/property/"
		if(os.path.isdir(srcpath)) :
			print("env path exists")
		else :
			os.system("mkdir -p " + self.aosp_root + "/vendor/patac/frameworks/base/core/java/patac/car/property/wrapper/")
			self.wrapper_root=self.aosp_root + "/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"
			self.wrapper_test_root=self.aosp_root + "/vendor/patac/frameworks/base/core/tests/patacframework-unittests/src/com/patac/vehicle/"

	def check_aosp_root(self):
		if(os.getenv('aosp_root') is None) :
			print("aosp_root not set . please run :")
			print("		export aosp_root=${youraosp_root}")
			exit(1)
		else :
			self.aosp_root = os.getenv('aosp_root')

	def get_script_root(self):
		return self.script_root

	def get_aosp_root(self):
		return self.aosp_root

	def get_wrapper_root(self):
		return self.wrapper_root

	def get_wrapper_test_root(self):
		return self.wrapper_test_root

	def get_property_template(self):
		return self.script_root+"/autogenlib/temp_property"

	def get_wrapper_template(self):
		return self.script_root+"/autogenlib/temp_lisence_and_dependency"

	def get_autogen_file(self,category):
		return self.wrapper_root+category+"Properties.java"

