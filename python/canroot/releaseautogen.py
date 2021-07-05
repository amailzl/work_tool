#!/usr/bin/python
import sys
import os
import getopt
from autogenlib.fileope import write_autogen_property
from autogenlib.fileope import *
from autogenlib.tokemapbuilder import tokenmapbuilder
from autogenlib.excelhelper import *
from autogenlib.setupenv import setupenv
from autogenlib.retrivelegacyproperty import retrivelegacyproperty

env_dir = "/usr/local/bin"
py_out_dir = "/home/amai/Work/workdesk/canroot/autogenlib"


def write_global_property(propertyvalue) :
    access=get_acccess_type(propertyvalue[9])

    if(access==3 or access==2) :
        print(propertyvalue[19] + " 设置" + propertyvalue[20])
    
    if(access==3 or access==1) :
        print(propertyvalue[19] + " 获取" + propertyvalue[20])
        print(propertyvalue[19] + " 注册监听" + propertyvalue[20])
        print(propertyvalue[19] + " 取消注册监听" + propertyvalue[20])
        
def main():
    env=setupenv()
    env.create_can_root()
    excelhp=excelhelper(env)
    start = 1
    end = 53
    while True:
        propertyvalue=excelhp.read_property(start)
        if propertyvalue is None :
            break
        if 1 != propertyvalue[14]:
            start=start+1
            if start == end :
                break
            continue

        write_global_property(propertyvalue)
        start=start+1
        if start == end :
            break



def get_acccess_type(access):
    if "WRITE" in access and "READ" in access:
        return 3
    elif "WRITE" in access:
        return 2
    elif "READ" in access:
        return 1
    else:
        return 0

# def get_value_type(value_type):
#     if "INT32" in value_type:
#         return "int"
#     elif "BOOLEAN" in value_type:
#         return "Boolean"
#     elif "FLOAT" in value_type:
#         return "float"
#     else:
#         return "T"

# def get_test_value(value_type):
#     if "INT32" in value_type:
#         return "1"
#     elif "BOOLEAN" in value_type:
#         return "true"
#     elif "FLOAT" in value_type:
#         return "float"
#     else:
#         return "T"

# def get_listener_type(value_type):
#     if "int" == value_type:
#         return "Integer"
#     elif "Boolean" == value_type:
#         return "Boolean"
#     elif "float" in value_type:
#         return "Float"
#     else:
#         return "T"

# def get_arch(arch):
#     if "GB" in arch:
#         return 1
#     else:
#         return 0

main()
