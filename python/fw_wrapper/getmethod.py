#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os

filelist = [
'WindowController',\
'VehicleStatusController',\
'PowertainController'
]
can_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"
class_n=""

def formatjavadoc(srcfile) : 
    contents = [""]
    try :
        f = open(srcfile, "r")
        contents = f.readlines()
        f.close()
    except IOError:
        print("file don't exist, creating")

    block_count = 0
    listener_start = False
    listener = ""
    prop = ""
    ns = ""
    ll = ""

    for line in contents :
    # while contents_index < len(contents) :
        # line = contents[contents_index]
        # if "get" in line and "public" in line and "{" in line and block_count == 1 and "static" not in line :
        # if "public" in line and "{" in line and block_count == 1 and "static" not in line :
        if "public abstract static class" in line :
            listener = line.split("public abstract static class")[1].split("extends")[0].strip()
            ll = line
            listener_start = True
        
        if "{" in line :
            block_count = block_count + line.count("{")

        if "}" in line :
            block_count = block_count - line.count("}")
        
        if listener_start and listener_start == 1 :

            if block_count == 1 and ll != line :
                print((class_n + " " + listener + " " + ns + " " + prop).replace("\n", ""))
                listener_start = False
                prop = ""
            if "PatacProperty" in line :
                prop = line.split("PatacProperty")[1].split(",")[0].strip()
                ns = "PatacProperty"
                # listener =""
            elif "VendorProperty" in line :
                prop = line.split("VendorProperty")[1].split(",")[0].strip()
                ns = "VendorProperty"
                # print((listener + " VendorProperty " + prop).replace("\n", ""))
                # listener_start = False
                # prop = ""
                # listener =""
            elif "VehicleProperty" in line :
                prop = line.split("VehicleProperty")[1].split(",")[0].strip()
                ns = "VehicleProperty"
                # print((listener + " VehicleProperty " + prop).replace("\n", ""))
                # listener_start = False
                # prop = ""
                # listener =""


    

for e in filelist:
    class_n=e
    formatjavadoc(can_root+e+".java")