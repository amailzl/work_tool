#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os

filelist = [
'LightController',\
'PersonalDriveModeController',\
'PowertainController',\
'VehicleStatusController',\
'WindowController'
]
controllerfile = "./controller.xml"
# 使用minidom解析器打开 XML 文档
controllerTree = xml.dom.minidom.parse(controllerfile)
controllerCollection = controllerTree.documentElement

# hal_impl_path="/home/amai/Work/PATAC/REPO/vcs/vendor/gm/hardware/impls/vehicle/impl"
# get all prop
controllerprops = controllerCollection.getElementsByTagName("property")

check_violation=True

# 
# for prop in controllerprops:
#     if prop.getAttribute("class") not in filelist :
#         continue

#     if "subscribe" in prop.getAttribute("halmapping") :
#         check_violation = True
#         for prop_check in controllerprops:
#             if prop_check.getAttribute("name") == prop.getAttribute("name") and "get" in prop_check.getAttribute("halmapping") :
#                 check_violation=False
#                 #no violation
#                 break

#         if check_violation :
#             print("violation detect (no get): " + prop.getAttribute("class") + " - " + prop.getAttribute("name") + " - " +  prop.getAttribute("method") )

#     if "get" in prop.getAttribute("halmapping") :
#         check_violation = True
#         for prop_check in controllerprops:
#             if prop_check.getAttribute("name") == prop.getAttribute("name") and "subscribe" in prop_check.getAttribute("halmapping") :
#                 check_violation=False
#                 #no violation
#                 break

#         if check_violation :
#             print("violation detect (no subscribe): " + prop.getAttribute("class") + " - " + prop.getAttribute("name") + " - " +  prop.getAttribute("method"))

# for prop in controllerprops:
#     if "DriveAssistController" in prop.getAttribute("class") :
#         print("--------------------------")
#         print(prop.getAttribute("name"))
#         # os.system("cd "+ hal_impl_path)
#         os.system("grep -nirE " + prop.getAttribute("name"))
#         print("--------------------------")

propertyfile = "./property.xml"
# 使用minidom解析器打开 XML 文档
propertyTree = xml.dom.minidom.parse(propertyfile)
propertyCollection = propertyTree.documentElement
props = propertyCollection.getElementsByTagName("property")

for cprop in controllerprops:
    for vprop in props : 
        if cprop.getAttribute("name") == vprop.getAttribute("name") :
            if cprop.getAttribute("namespace") != vprop.getAttribute("ns") : 
                print("violation detect (name space changed): " + cprop.getAttribute("class") + " - " + cprop.getAttribute("name") + " - " +  cprop.getAttribute("method"))
            