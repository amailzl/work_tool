import xlrd
import xlwt
import os
import os.path
from xlutils.copy import copy
from xlwt import *
from autogenlib.controller_properties import *
from autogenlib.fileope import *
from autogenlib.vehicle_property import vehicle_property
import sys

gm_enum_file="/home/amai/Work/MY-github/work_tool/python/canroot/enum_gm.h"
patac_enum_file="/home/amai/Work/MY-github/work_tool/python/canroot/enum_patac.h"
gm_types_file="/home/amai/Work/MY-github/work_tool/python/canroot/types_gm.h"
patac_types_file="/home/amai/Work/MY-github/work_tool/python/canroot/types_patac.h"

row_property=0
row_enum=row_property+1
row_access=row_enum+1
row_x_id=row_access+1
row_value_type=row_x_id+1

def readenum(vhalproperty, index, sheet):
    gm_fd = open (gm_enum_file, 'r')
    patac_fd = open (patac_enum_file, 'r')
    # gm_fd = get_file(gm_enum_file)
    # patac_fd = get_file(patac_enum_file)
    gm_fd.seek(0, 0)
    patac_fd.seek(0, 0)
    encounterFlag=False
    startflag=False
    endFlag=False
    enumline=""
    valuetype=""

    print("enter gm")
    for line in gm_fd.readlines():
        if vhalproperty in str(line):
            print("property " + vhalproperty+ " found")
            encounterFlag=True
        if(encounterFlag and read_enum_encounter(line)) :
            valuetype=str(line).replace("\n", "").replace(" ", "").replace("{", "").split(":")[1]
            startflag=True
            encounterFlag=False
        if(startflag and read_enum_end(line)) :
            endFlag=True

        if(startflag) :
            enumline = enumline+str(line).replace("\n", "").replace(" ", "").replace("    ", "")
        if(endFlag):
            startflag=False
            sheet.write(index, row_enum, enumline.split("{")[1].split("}")[0])
            sheet.write(index, row_value_type, valuetype)
            enumline=""
            endFlag=False
            close_file(gm_fd)
            return
    close_file(gm_fd)

    print("enter patac")
    for line in patac_fd.readlines():
        if vhalproperty in str(line):
            print("property " + vhalproperty+ " found")
            encounterFlag=True
        if(encounterFlag and read_enum_encounter(line)) :
            valuetype=str(line).replace("\n", "").replace(" ", "").replace("{", "").split(":")[1]
            startflag=True
            encounterFlag=False
        if(startflag and read_enum_end(line)) :
            endFlag=True

        if(startflag) :
            print(line)
            enumline = enumline+str(line).replace("\n", "").replace(" ", "").replace("    ", "")
        if(endFlag):
            print("write ")
            startflag=False
            sheet.write(index, row_enum, enumline.split("{")[1].split("}")[0])
            sheet.write(index, row_value_type, valuetype)
            enumline=""
            endFlag=False
            close_file(patac_fd)
            return
    close_file(patac_fd)

def readtypes(vhalproperty, index, sheet):
    gm_fd = open (gm_types_file, 'r')
    patac_fd = open (patac_types_file, 'r')
    gm_fd.seek(0, 0)
    patac_fd.seek(0, 0)
    access="NA"
    print("enter gm")

    for line in gm_fd.readlines():
        if(read_types_access_encounter(line)) :
            access=get_types_access(line)
        if(read_types_property_encounter(line)) :
            ret=get_types_property_and_signalid(line)
            propid=ret[0]
            # for elem in drive_assist_property_list :
            if propid == vhalproperty:
                print("write access xid")
                sheet.write(index, row_access, access)
                sheet.write(index, row_x_id, ret[1])
                # print(propid)
                # print(ret[1])
                close_file(gm_fd)
                return
    close_file(gm_fd)

    print("enter patac")
    access="NA"
    for line in patac_fd.readlines():
        if(read_types_access_encounter(line)) :
            access=get_types_access(line)
        if(read_types_property_encounter(line)) :
            ret=get_types_property_and_signalid(line)
            propid=ret[0]
            if propid == vhalproperty:
                print("write access xid")
                sheet.write(index, row_access, access)
                sheet.write(index, row_x_id, ret[1])
                close_file(gm_fd)
                return
    close_file(patac_fd)


def main():
    index=0
    property_book = xlwt.Workbook(encoding = 'utf-8')
    property_sheet = property_book.add_sheet('property_sheet')

    for e in check_violation:
        property_sheet.write(index, row_property, e)
        readtypes(e, index, property_sheet)
        readenum(e, index, property_sheet)
        index=index+1

    property_book.save('3_property_attr.xls')

main()