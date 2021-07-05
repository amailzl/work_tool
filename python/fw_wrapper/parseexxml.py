#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os
filelist = [
'AmbientLightController',\
'DriveAssistController',\
'HvacController',\
'LightController',\
'PersonalDriveModeController',\
'PowertainController',\
'SeatController',\
'VehicleStatusController',\
'WindowController'
]

permissionfile = "./permission.xml"
# 使用minidom解析器打开 XML 文档
permissionTree = xml.dom.minidom.parse(permissionfile)
permissionCollection = permissionTree.documentElement
rows = permissionCollection.getElementsByTagName("Row")
# for cprop in controllerprops:
for row in rows : 
    Cells = row.getElementsByTagName("Cell")
    for Cell in Cells :
        try :
            print(Cell.getElementsByTagName("Data")[0].childNodes[0].nodeValue)
        except Exception :
            pass
            