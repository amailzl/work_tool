#!/usr/bin/python
import sys
import re

#
# @param filepath
# @return fd
#
# try to create file in ab+ mode
#
def get_file(file) :
    try :
        f = open (file, 'ab+')
        return f
    except IOError:
        print('[IOError] get_file failed: ' + file)
        exit(2)

#
# @param fd
#
# try to close an opened file
#
def close_file(f) :
    try :
        f.close()
        return True
    except IOError:
        print('[IOError] file '+ file +'close failed')
        exit(2)

#
# @param filepath
# @return fd
#
# try to create file in w+ mode
#
def get_clear_file(file) :
    try :
        f = open (file, 'w+')
        return f
    except IOError:
        print('[IOError] get_clear_file failed: ' + file)
        exit(2)

#
# @param fd
# @param token
#
# get token offset
#
def write_autogen_property(srcfile, dstfile, tokenmap, rewrite = False) :
    # print("finding token : " + token + " in " + file)
    srcfd = get_file(srcfile)
    dstfd = get_file(dstfile)

    if(rewrite == True) :
        get_clear_file(dstfile)

    result = 0
    srcfd.seek(0, 0)
    dstfd.seek(-2, 2)
    skipcount = 0

    for line in srcfd.readlines():
        if skipcount > 0:
            skipcount = skipcount - 1
            continue

        # if set not enabled , 6 line will be skip
        if "#skip_set" in line :
            if tokenmap["#set_enabled"]==False:
                skipcount=6
            continue

        for key in tokenmap.keys() :
            if key in line :
                line = line.replace(key, tokenmap[key])
                result = result + 1

        dstfd.write(line)

    srcfd.seek(0, 0)
    # dstfd.seek(0, 0)
    close_file(srcfd)
    close_file(dstfd)
    return result

def create_wrapper_class(srcfile, dstfile, category) :
    # print("finding token : " + token + " in " + file)
    srcfd = get_file(srcfile)
    dstfd = get_file(dstfile)

    srcfd.seek(0, 0)
    # dstfd.seek(0, 0)
    skipcount = 0

    for line in srcfd.readlines():
        if "#category" in line :
            line = line.replace("#category", category)
        dstfd.write(line)
    srcfd.seek(0, 0)
    # dstfd.seek(0, 0)
    close_file(srcfd)
    close_file(dstfd)

def is_property_field(line):
    if ("VendorProperty" in line ) or ("PatacProperty" in line ) or ("VehiclePropertyIds" in line) :
        if("=" in line) or ("import" in line) or ("extends" in line):
            return False
        else :
            return True
    else :
        return False

def hal_property_enconter(line):
    if (" = (" in line ) :
        return True
    else :
        return False

def get_property_ns(line):
    line=line.replace(" ", "")\
            .replace(",", "")\
            .replace("\n", "")\
            .replace(")", "")\
            .replace("(", "")\
            .replace("{", "")\
            .replace("}", "")\
            .replace(";", "")

    ret=line.split(".")
    return ret[0]

def get_property_id(line):
    line=line.replace(" ", "")\
            .replace(",", "")\
            .replace("\n", "")\
            .replace(")", "")\
            .replace("(", "")\
            .replace("{", "")\
            .replace("}", "")\
            .replace(";", "")

    ret=line.split(".")
    return ret[1]

def file_empty(file):
    if not os.path.exists(file) or not os.path.getsize(file):
        return True
    else:
        return False

def hal_start(line):
    if "BEGIN GENERATED PROPERTIES" in line :
        return True
    else:
        return False


def hal_end(line):
    if "END GENERATED PROPERTIES" in line :
        return True
    else:
        return False

def get_hal_property(line):
    line=line.replace(" ", "")\
            .replace("\n", "")\
            .replace("{", "")
    ret=line.split("=")
    return ret[0]

def get_hal_signal(line):
    return line.replace(" ", "").replace("\n", "")

def get_hal_property_group(line):
    line=line.replace(" ", "")\
            .replace("\n", "")\
            .replace("|", "")
    ret=line.split(":")
    print(ret)
    return ret[1]

def get_hal_area(line):
    line=line.replace(" ", "")\
            .replace("\n", "")\
            .replace("|", "")\
            .replace(")", "")\
            .replace(",", "")
    ret=line.split(":")
    return ret[1]

def get_hal_type(line):
    line=line.replace(" ", "")\
            .replace("\n", "")\
            .replace("|", "")
    ret=line.split(":")
    return ret[1]

def read_types_property_encounter(line):
    if '=' in line :
        return True
    else :
        return False

def read_types_access_encounter(line):
    if '@access' in line :
        return True
    else :
        return False

def read_enum_encounter(line):
    if 'enum class' in line :
        return True
    else :
        return False

def read_enum_end(line):
    if '};' in line :
        return True
    else :
        return False

def get_types_property_and_signalid(line):
    line=str(line)
    line=line.replace(" ", "")\
            .replace("\n", "")\
            .replace("b'", "")
    ret=line.split('/*')
    return ret[0].split("=")

def get_types_access(line):
    line=str(line)
    line=line.replace(" ", "")\
            .replace("\n", "")
    ret=line.split(":")
    return ret[1]

def writefile(fd, str) :
    fd.write((str+"\n"))

def write_at_index(file,line,index=-1):
    f = open(file, "r")
    contents = f.readlines()
    f.close()

    if index == -1:
        index=len(contents)-1

    line=line+"\n"
    contents.insert(index, line)

    f = open(file, "w")
    contents = "".join(contents)
    f.write(contents)
    f.close()