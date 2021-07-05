#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os

filelist = [
'DriveAssistControllerTest'
]
can_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"
test_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/tests/patacframework-unittests/src/com/patac/vehicle/"


def formatjavadoc(srcfile) : 
    contents = [""]
    try :
        f = open(srcfile, "r")
        contents = f.readlines()
        f.close()
    except IOError:
        print("file don't exist, creating")

    # return_type = ""
    # return_value = ""
    # # return_value = ""
    # return_line = ""
    # return_line_num = 0
    # all_line_num = len(contents)
    # print(all_line_num)
    line_num = 0
    # get_start = False
    # block_count = 0
    # return_start = False
    # return_count = 0
    # contents_index = 0 
    for line in contents :
    # while contents_index < len(contents) :
        # line = contents[contents_index]
        if "ret = mDriveAssistCtrl.get" in line :
            # return_type = line.split("get")[0].split("public")[1].strip().replace("int", "Integer").replace("float", "Float")
            newline = line.replace(";", "").replace("\n", "")+ ".getValue();\n"
            # # print(return_type)
            del contents[line_num]
            contents.insert(line_num, newline)
            get_start = True

        line_num = line_num + 1

    f = open(srcfile, "w")
    contents = "".join(contents)
    f.write(contents)
    f.close()
    

for e in filelist:
    formatjavadoc(test_root+e+".java")