from autogenlib.controller_properties import drive_assist_property_list
from autogenlib.fileope import *
from autogenlib.vehicle_property import vehicle_property

gm_types_file="/home/amai/Work/workdesk/canroot/types_gm.h"
patac_types_file="/home/amai/Work/workdesk/canroot/types_patac.h"

myproperties=[]

def readtypes():
	gm_fd = get_file(gm_types_file)
	patac_fd = get_file(patac_types_file)
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
			for elem in drive_assist_property_list :
				if elem == propid:
					# print(access)
					# print(propid)
					# print(ret[1])
					print(propid+" "+access+" "+ret[1])
					myproperty=vehicle_property(propid, access, ret[1])
					myproperties.append(myproperty)
	close_file(gm_fd)
	print("enter patac")
	access="NA"
	for line in patac_fd.readlines():
		if(read_types_access_encounter(line)) :
			access=get_types_access(line)
		if(read_types_property_encounter(line)) :
			ret=get_types_property_and_signalid(line)
			propid=ret[0]
			for elem in drive_assist_property_list :
				if elem == propid:
					print(propid+" "+access+" "+ret[1])
					myproperty=vehicle_property(propid, access, ret[1])
					myproperties.append(myproperty)
	close_file(patac_fd)


readtypes()