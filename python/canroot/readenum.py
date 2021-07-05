from autogenlib.controller_properties import drive_assist_property_list
from autogenlib.fileope import *
from autogenlib.vehicle_property import vehicle_property

gm_types_file="/home/amai/Work/workdesk/canroot/enum_gm.h"
patac_types_file="/home/amai/Work/workdesk/canroot/enum_patac.h"

myproperties=[]

def readenum():
	gm_fd = get_file(gm_types_file)
	patac_fd = get_file(patac_types_file)
	gm_fd.seek(0, 0)
	patac_fd.seek(0, 0)
	encounterFlag=False
	startflag=False
	endFlag=False
	enumline=""


	print("enter gm")
	for line in gm_fd.readlines():
		for e in drive_assist_property_list:
			if e in str(line):
				encounterFlag=True
		if(encounterFlag and read_enum_encounter(line)) :
			startflag=True
			encounterFlag=False
		if(startflag and read_enum_end(line)) :
			endFlag=True

		if(startflag) :
			enumline = enumline+str(line).replace("\n", "").replace(" ", "").replace("	", "")
		if(endFlag):
			startflag=False
			print(enumline)
			enumline=""
			endFlag=False	
	close_file(gm_fd)
	print("enter patac")

	for line in patac_fd.readlines():
		for e in drive_assist_property_list:
			if e in str(line):
				encounterFlag=True
		if(encounterFlag and read_enum_encounter(line)) :
			startflag=True
			encounterFlag=False
		if(startflag and read_enum_end(line)) :
			endFlag=True

		if(startflag) :
			enumline = enumline+str(line).replace("\n", "").replace(" ", "").replace("	", "")
		if(endFlag):
			startflag=False
			print(enumline)
			enumline=""
			endFlag=False
	close_file(patac_fd)


readenum()