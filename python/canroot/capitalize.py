#!/usr/bin/python
import sys
import os
import getopt
from autogenlib.fileope import *
from autogenlib.controller_properties import *

calist = [
'VCU_SPEED_LIMIT_ARBITRATION_RESULTS_ASSURED',\
'VCU_SPEED_LIMIT_ARBITRATION_RESULTS',\
'V_2_X_SPEED_LIMITED_VALUE',\
'V_2_X_MODULE_AVAILABILITY',\
'TRAFFIC_JAM_ROAD_AVERAGE_SPEED_AVAILABILITY',\
'TRAFFIC_JAM_ROAD_AVERAGE_SPEED',\
'NAVIGATION_ON_ADAS_STATUS',\
'NAVIGATION_ON_ADAS_ON_LIMITED_ACCESS_ROAD_INDICATION_ON',\
'NAVIGATION_ON_ADAS_LANE_CHANGING_TO_FOLLOW_ROUTE',\
'NAVIGATION_ON_ADAS_INFO_NAVIGATION_STATUS',\
'NAVIGATION_ON_ADAS_DISTANCE_TO_END',\
'NAVIGATION_ON_ADAS_CONFIRM_CHANGE_TO_SLOW_LANE_REQUEST',\
'NAVIGATION_ON_ADAS_CONFIRM_CHANGE_TO_FAST_LANE_REQUEST',\
'NAVIGATION_ON_ADAS_CHANGING_TO_SLOW_LANE',\
'NAVIGATION_ON_ADAS_CHANGING_TO_FAST_LANE',\
'NAVIGATION_ON_ADAS_BUTTON_SETTING_REQUEST',\
'NAVIGATION_ON_ADAS_BUTTON_SETTING_AVAILABLE',\
'NAVIGATION_ON_ADAS_BUTTON_CURRENT_VALUE',\
'GPS_POSITION',\
'DISTANCE_TO_TRAFFIC_JAM_ROAD_AVAILABILITY',\
'DISTANCE_TO_TRAFFIC_JAM_ROAD',\
'DISTANCE_ON_TRAFFIC_JAM_ROAD_AVAILABILITY',\
'DISTANCE_ON_TRAFFIC_JAM_ROAD'\
]

def capitalize():
    capitalized=""
    for e in calist:
        for item in e.split("_"):
            capitalized=capitalized+item.capitalize()
        print(drive_assist_build_rule(capitalized))
        # print(e.upper())
        capitalized=""


def drive_assist_build_rule(str):
    return str.replace("AdaptiveCruiseControl", "ACC")\
            .replace("AdvancedParkAssist", "APA")\
            .replace("ParkAssist", "APA")\
            .replace("AutoHold", "AVH")\
            .replace("AutoVehicleHold", "AVH")\
            .replace("SignalGroup", "")\
            .replace("\n", "")\
            .replace("TractionAndStability", "TCS")\
            .replace("Navigation", "Navi")\
            .replace("HillDescentControl", "HDC")\
            .replace("VehicleStabilityEnhancement", "VSE")\
            .replace("TractionControlSystem", "TCS")\
            .replace("Control", "Ctrl")\
            .replace("IndicationOn", "Indication")

def seat_build_rule(str):
    return str.replace("Automatic", "Auto")\
            .replace("Customization", "Status")\
            .replace("SeatPassengerCompartmentMode", "SeatCompartment")\
            .replace("Request", "Req")\
            .replace("Third", "3rd")\
            .replace("Second", "2nd")\
            .replace("First", "1st")\
            .replace("Read", "2nd")\
            .replace("LevelControl", "LvSwitch")

capitalize()