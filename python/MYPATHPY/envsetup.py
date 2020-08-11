#!/usr/bin/python
import sys
import os
import getopt
from amaifilelib.fileope import add_line

env_dir = "/usr/local/bin"
py_out_dir = "/home/amai/Work/MY-github/work_tool/python/OUT"

def create_alias_bash() :
    add_line(py_src_dir + "/.bash_aliases_py_clone", 1, "# this file is generated autimatically by script ")
    add_line(py_src_dir + "/.bash_aliases_py_clone", 2, "# try to use command to edit this file instead of changing content directly ")
    add_line(py_src_dir + "/.bash_aliases_py_clone", 3, "# for script command instruction see /usr/local/bin/readme.txt")
    add_line(py_src_dir + "/.bash_aliases_py_clone", 4, "# token = start")
    add_line(py_src_dir + "/.bash_aliases_py_clone", 5, "alias gop=\"source gopath\"")
    add_line(py_src_dir + "/.bash_aliases_py_clone", 6, "alias pcd=\"python3 " + env_dir + "/pycomd.py\"")

create_alias_bash()