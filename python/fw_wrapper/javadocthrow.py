#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os

filelist = [
'PersonalDriveModeController',\
'DriveAssistController',\
'SeatController'
]
can_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"

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
    # # print(all_line_num)

    # jd_start = False
    # block_count = 0
    # return_start = False
    # return_count = 0
    jd_start = False
    contents_index = 0
    arch = ""
    newline = ""
    # for line in contents :
    while contents_index < len(contents) :
        line = contents[contents_index]

        if "/*" in line :
            jd_start = True

        if "*/" in line :
            jd_start = False


        if jd_start :
            if "     * <p>Supported elec arch:" in line :
                arch = line.split(":")[1].split(".")[0].strip()
            
            if "If called in arch not declared above" in line:
                newline = line.replace("arch not declared above", "non-"+arch+" arch")
                del contents[contents_index]
                contents.insert(contents_index, newline)
        
        # if jd_start and "return" in line :
        #     return_line_num = contents_index
        #     return_start = True
        #     return_line = return_line + line
        #     return_count = return_count + 1
        #     return_value = line.replace("return ", "").replace(";", "").strip()
        
        # if return_start and jd_start:
        #     # print(line)
        #     extra = line.replace("return ", "").replace(";", "").strip()
        #     if extra not in return_value :
        #         return_count = return_count + 1
        #         return_value = return_value + extra
        #     if ";" in line :
        #         # print(return_count)
        #         return_start = False
        #         while return_count > 0 :
        #             return_count = return_count - 1
        #             # line_num = contents.index(line) - return_count
        #             # print(line_num)
        #         #     # print(return_value)
        #             # print (contents[line_num])
        #             del contents[return_line_num]
        #         if "ERROR" not in return_value :
        #             newline = return_line.replace(return_line.split("return")[1], "") + " new Result<"+return_type.replace("int", "Integer")+">("+return_value+", Result.STATUS_AVAILABLE);\n"
        #         else:
        #             newline = return_line.replace(return_line.split("return")[1], "") + " new Result<"+return_type.replace("int", "Integer")+">("+return_value+", Result.STATUS_UNAVAILABLE);\n"
        #         # print (newline)
        #         contents.insert(return_line_num, newline)
        #         contents_index = return_line_num
        #         return_line = ""
        
        contents_index = contents_index + 1

    f = open(srcfile, "w")
    contents = "".join(contents)
    f.write(contents)
    f.close()
    

for e in filelist:
    formatjavadoc(can_root+e+".java")