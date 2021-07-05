#!/usr/bin/python
import sys
import os
import getopt
from amaifilelib.fileope import add_line
from amaifilelib.fileope import replace_token
from amaifilelib.fileope import del_line
from amaifilelib.fileope import get_clear_file

env_dir = "/usr/local/bin"
py_out_dir = "/home/amai/Work/MY-github/work_tool/python/OUT"

def delete_test() :
	get_clear_file(py_out_dir + "/test_out_file")
	add_line(py_out_dir + "/test_out_file", 1, "public class #class_name extends PropertyBase")
	add_line(py_out_dir + "/test_out_file", 2, "public class #class_name extends PropertyBase")
	add_line(py_out_dir + "/test_out_file", 3, "public class #class_name extends PropertyBase")
	add_line(py_out_dir + "/test_out_file", 4, "4")
	add_line(py_out_dir + "/test_out_file", 5, "5")
	add_line(py_out_dir + "/test_out_file", 6, "6")

	# del_line(py_out_dir + "/test_out_file", 6)
	# del_line(py_out_dir + "/test_out_file", 1)
	# del_line(py_out_dir + "/test_out_file", 1)

	tokenmap = {}
	tokenmap["#class_name"]="mycustomname"
	tokenmap["#property_ID"]="mycustomid"
	tokenmap["#property_namespace"]="mycustomnamespace"
	tokenmap["#value_type"]="mycustomtype"
	tokenmap["#custom_zone"]="int zone"
	tokenmap["#OpeName"]="Custom"
	tokenmap["#cz_extra"]=", "
	tokenmap["#default_zone"]="mydefaultzone"
	for key in tokenmap.keys() :
		print (key)
		print(tokenmap[key])
	print(str(replace_token(py_out_dir + "/temp_property",py_out_dir + "/test_dst_file", tokenmap)) + " times replacement happened ")


delete_test()