#!/usr/bin/python
import sys
import os
import getopt
from amaifilelib.fileope import add_line
from amaifilelib.fileope import del_line
from amaifilelib.fileope import get_clear_file

env_dir = "/usr/local/bin"
py_out_dir = "/home/amai/Work/MY-github/work_tool/python/OUT"

def delete_test() :
	get_clear_file(py_out_dir + "/test_out_file")
	add_line(py_out_dir + "/test_out_file", 1, "1")
	add_line(py_out_dir + "/test_out_file", 2, "2")
	add_line(py_out_dir + "/test_out_file", 3, "3")
	add_line(py_out_dir + "/test_out_file", 4, "4")
	add_line(py_out_dir + "/test_out_file", 5, "5")
	add_line(py_out_dir + "/test_out_file", 6, "6")

	del_line(py_out_dir + "/test_out_file", 6)
	del_line(py_out_dir + "/test_out_file", 1)
	del_line(py_out_dir + "/test_out_file", 1)

delete_test()	