import xlrd
import xlwt
import os
import os.path
from xlutils.copy import copy
from xlwt import *
from autogenlib.controller_properties import *
from autogenlib.fileope import *
from autogenlib.propertyneedsort import sort_list
import sys


row_property=0
row_func=row_property+1
row_controller=row_func+1

category_list=['AIR_QUALITY',\
                'CUSTOM_MODE',\
                'PERSONAL_MODE',\
                'DRIVE_MODE',\
                'PERFORMANCE_MODE',\
                'COMFORT_MODE',\
                'ONE_PEDAL_DRIVING',\
                'HVAC',\
                'LANE',\
                'DOOR',\
                'SEAT',\
                'LAMP',\
                'WINDOW',\
                'WIPER',\
                'SUNSHADE',\
                'SUNROOF',\
                'SUNBLIND',\
                'INTERIOR_DIMMING',\
                'AMBIENT_LIGHT',\
                'FOG_LIGHTS'\
                'STEERING_WHEEL',\
                'ADAS',\
                'NAVIGATION',\
                'FUEL',\
                'ENGINE',\
                'TIRE',\
                'BRAKE',\
                'ROTOR',\
                'HILL',\
                'TPMS',\
                'TRACTION_AND_STABILITY',\
                'V_2_X',\
                'TRAFFIC',\
                'MODEL'
                ]

controller = [
'AmbientLightController',\
'DriveAssistController',\
'HvacController',\
'LightController',\
'PersonalDriveModeController',\
'PowertainController',\
'SeatController',\
'VehicleStatusController',\
'WindowController'\
]

def narrow_down_category(m_category_list, prop):
    count = 1
    if(len(m_category_list) == 1) :
        return m_category_list[0]
    else :
        print("***********************************")
        print("find multiple suitable category while parsering property : " + prop )
        for item in m_category_list:
            print(str(count) + " : " + item)
            count=count+1
        usr_select=input("please choose a category : ")
        return m_category_list[int(usr_select) -1]


def sort_controller(func):
    if func == 'AIR_QUALITY' :
        return 'HvacController' 
    if func == 'CUSTOM_MODE' :
        return 'PersonalDriveModeController' 
    if func == 'PERSONAL_MODE' :
        return 'PersonalDriveModeController' 
    if func == 'DRIVE_MODE' :
        return 'PersonalDriveModeController' 
    if func == 'PERFORMANCE_MODE' :
        return 'PersonalDriveModeController' 
    if func == 'COMFORT_MODE' :
        return 'PersonalDriveModeController' 
    if func == 'ONE_PEDAL_DRIVING' :
        return 'PersonalDriveModeController' 
    if func == 'HVAC' :
        return 'HvacController' 
    if func == 'LANE' :
        return 'DriveAssistController' 
    if func == 'DOOR' :
        return 'VehicleStatusController' 
    if func == 'SEAT' :
        return 'SeatController' 
    if func == 'LAMP' :
        return 'LightController' 
    if func == 'WINDOW' :
        return 'WindowController' 
    if func == 'WIPER' :
        return 'VehicleStatusController' 
    if func == 'SUNSHADE' :
        return 'WindowController' 
    if func == 'SUNROOF' :
        return 'WindowController' 
    if func == 'SUNBLIND' :
        return 'WindowController' 
    if func == 'INTERIOR_DIMMING' :
        return 'LightController' 
    if func == 'AMBIENT_LIGHT' :
        return 'HvacController' 
    if func == 'FOG_LIGHTS':
        return 'LightController' 
    if func == 'STEERING_WHEEL' :
        return 'HvacController' 
    if func == 'ADAS' :
        return 'DriveAssistController' 
    if func == 'NAVIGATION' :
        return 'DriveAssistController' 
    if func == 'FUEL' :
        return 'PowertainController' 
    if func == 'ENGINE' :
        return 'PowertainController' 
    if func == 'TIRE' :
        return 'PowertainController' 
    if func == 'BRAKE' :
        return 'PowertainController' 
    if func == 'ROTOR' :
        return 'PowertainController' 
    if func == 'HILL' :
        return 'DriveAssistController' 
    if func == 'TPMS' :
        return 'PowertainController' 
    if func == 'TRACTION_AND_STABILITY' :
        return 'HvacController' 
    if func == 'V_2_X' :
        return 'DriveAssistController' 
    if func == 'TRAFFIC' :
        return 'DriveAssistController'


def main():
    index=0
    property_book = xlwt.Workbook(encoding = 'utf-8')
    property_sheet = property_book.add_sheet('property_sheet')
    
    
    m_func=[]
    func_count = 0
    for prop in sort_list:
        for func in category_list:
            if func in prop :
                m_func.append(func)
                func_count = func_count + 1
            
        property_sheet.write(index, row_property, prop)
        if func_count > 0 :
            m_f = narrow_down_category(m_func,prop)
            property_sheet.write(index, row_func, m_f)
            property_sheet.write(index, row_controller, sort_controller(m_f))
        
        index = index +1
        m_func = []
        func_count = 0

    property_book.save('4_property_sort.xls')

main()