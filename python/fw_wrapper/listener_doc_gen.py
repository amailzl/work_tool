#!/usr/bin/python
# -*- coding: UTF-8 -*-
from xml.dom.minidom import parse
import xml.dom.minidom
import os

# filelist = [
# 'DriveAssistController',\
# 'PersonalDriveModeController',\
# 'PowertainController',\
# 'SeatController',\
# 'VehicleStatusController',\
# 'WindowController'
# ]
# filelist = ['PersonalDriveModeController']

filelist = [
'WindowController',\
'VehicleStatusController',\
'PowertainController'
]
can_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"
# controllerfile = "./controller.xml"
controllerfile = "./special.xml"

desinfo = ""
specinfo = ""
archinfo = ""
perminfo = ""
paraminfo = ""
returninfo = ""
newjavaDoctemplate = ""

def reset_doctmplate():
    global desinfo
    # global specinfo
    global archinfo
    global perminfo
    global paraminfo
    global returninfo
    global newjavaDoctemplate
    desinfo = ""
    # specinfo = ""
    archinfo = ""
    perminfo = ""
    paraminfo = ""
    returninfo = ""
    newjavaDoctemplate = ""

def build_new_doc():
    global desinfo
    global specinfo
    global archinfo
    global perminfo
    global paraminfo
    global returninfo
    global newjavaDoctemplate
    return "    /**\n\
     * Description: "+desinfo+".\n\
     *\n\
     * <p>FunctionSpec: "+specinfo+".\n\
     *\n\
     * <p>Supported elec arch: "+archinfo+".\n\
     *\n\
     * <p>Requested permission: "+perminfo+".\n\
     *\n"+paraminfo+""+returninfo+"\
     */\n"

def build_listener_doc():
    global desinfo
    global specinfo
    global archinfo
    global perminfo
    global paraminfo
    global returninfo
    global newjavaDoctemplate
    return "    /**\n\
     * Description: "+desinfo+".\n\
     *\n\
     * <p>FunctionSpec: "+specinfo+".\n\
     *\n\
     * <p>Supported elec arch: "+archinfo+".\n\
     *\n\
     * <p>Requested permission: "+perminfo+".\n\
     */\n"

def get_funcspec(method):
    global specinfo
    releasefile = "./releasedoc.xml"
    # 使用minidom解析器打开 XML 文档
    releaseTree = xml.dom.minidom.parse(releasefile)
    releaseCollection = releaseTree.documentElement
    rows = releaseCollection.getElementsByTagName("Row")
    # for cprop in controllerprops:
    for row in rows : 
        Cells = row.getElementsByTagName("Cell")
        for Cell in Cells :
            try :
                # if method in Cell.getElementsByTagName("Data")[0].childNodes[0].nodeValue and "PIS" in Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue.upper():
                if "PIS" in Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue.upper():
                    specinfo = Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue.replace("\n", "") + "#" +Cells[1].getElementsByTagName("Data")[0].childNodes[0].nodeValue.replace("\n", "")
                if method in Cell.getElementsByTagName("Data")[0].childNodes[0].nodeValue :
                    # print("find : " + method)
                    return specinfo
            except Exception :
                pass

def get_permission(propertyid) :
    global perminfo
    permissionfile = "./permission.xml"
    # 使用minidom解析器打开 XML 文档
    permissionTree = xml.dom.minidom.parse(permissionfile)
    permissionCollection = permissionTree.documentElement
    rows = permissionCollection.getElementsByTagName("Row")
    # for cprop in controllerprops:
    for row in rows : 
        Cells = row.getElementsByTagName("Cell")
        try :
            # print(Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue)
            if Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue == propertyid :
                # print(Cells[0].getElementsByTagName("Data")[0].childNodes[0].nodeValue)
                perminfo = Cells[1].getElementsByTagName("Data")[0].childNodes[0].nodeValue
                # print(perminfo)
                return perminfo
        except Exception :
            pass
            


def formatjavadoc(srcfile, method, propid, type = 0) : 
    contents = [""]
    global desinfo
    global specinfo
    global archinfo
    global perminfo
    global paraminfo
    global returninfo
    global newjavaDoctemplate
    try :
        f = open(srcfile, "r")
        contents = f.readlines()
        f.close()
    except IOError:
        print("file don't exist, creating")

    docstart = 0
    docend = 0
    cline = 0
    olddocinfo = ['']
    docencounter = False
    hasDoc =  False
    unre = False

    #get old javadoc and locate it 
    for line in contents :
        if docencounter:
            olddocinfo.append(line)

        if ( "/*" in line ) :
            docencounter=True
            docstart = cline
            olddocinfo = ['']
            olddocinfo.append(line)
        if ("*/" in line):
            docend = cline
            docencounter=False
            olddocinfo.append(line)

        # if method in line and "public" in line and "{" in line:
        #for listener
        # if method in line and "public abstract static class " in line:
        #     docstart = cline
        #     if ("*/" in contents[cline - 1]): 
        #          hasDoc = True
        #     # print ("find method : " + method + ", with javadoc \n" + olddocinfo)
            
        #     break
        if "register"+method in line and "public void " in line:
            if "unregister" in line :
                unre = True
            if ("*/" in contents[cline - 1]): 
                 hasDoc = True
            else :
                docstart = cline
            # print ("find method : " + method + ", with javadoc \n" + olddocinfo)
            
            break
        
        cline = cline + 1

    #extract old javadoc info into new javadoc 
    paramstart = False
    returnstart = False
    desinfo = olddocinfo[2].replace("*", "").replace(".", "").strip()
    for line in olddocinfo :
        if "CLEA" in line.upper() and "CLEA" not in archinfo:
            archinfo = archinfo + "CLEA "
        if "GB" in line.upper() and "GB" not in archinfo :
            archinfo = archinfo + "GB "
        if "@param" in line :
            paramstart = True
        if "@return" in line :
            returnstart = True

        if "@param" not in line and( "* @" in line or "*/" in line ):
            paramstart = False
        if "@return" not in line and( "* @" in line or "*/" in line ):
            returnstart = False
        
        if paramstart:
            paraminfo = paraminfo + line
        if returnstart:
            returninfo = returninfo + line

    
    # print(paraminfo)
    # print(returninfo)

    #extract spec info into new javadoc
    specinfo = get_funcspec(method)
    if specinfo is None :
        print("find none spec for : " + method)
        specinfo = ""
    # print(specinfo)
            
    #extract permission info into new javadoc
    perminfo = get_permission(propid)
    if perminfo is None :
        print("find none perminfo for : " + propid)
        perminfo = ""
    # print(perminfo)

    if hasDoc :
        # pass
        #delete old javadoc
        while(docend >= docstart) :
            # print(docstart)
            # contents.remove(contents.index(docstart))
            del contents[docstart]
            docend = docend - 1

        #inject new javadoc
        # newjavaDoctemplate = build_new_doc()
        newjavaDoctemplate = build_listener_doc()
        contents.insert(docstart, newjavaDoctemplate)
        reset_doctmplate()

    else :
        if unre :
            desinfo = "for unregister {@link " + method+"}"
        else :
            desinfo = "for register {@link " + method+"}"
        #inject new javadoc
        # newjavaDoctemplate = build_new_doc()
        newjavaDoctemplate = build_listener_doc()
        contents.insert(docstart, newjavaDoctemplate)
        reset_doctmplate()
        
    f = open(srcfile, "w")
    contents = "".join(contents)
    f.write(contents)
    f.close()
    

# 使用minidom解析器打开 XML 文档
controllerTree = xml.dom.minidom.parse(controllerfile)
controllerCollection = controllerTree.documentElement

# hal_impl_path="/home/amai/Work/PATAC/REPO/vcs/vendor/gm/hardware/impls/vehicle/impl"
# get all prop
controllerprops = controllerCollection.getElementsByTagName("property")

for cprop in controllerprops:
    if cprop.getAttribute("class") not in filelist:
        continue
    if cprop.getAttribute("halmapping") == "set" :
        formatjavadoc(can_root+cprop.getAttribute("class")+".java", cprop.getAttribute("method"), cprop.getAttribute("name"))
    if cprop.getAttribute("halmapping") == "get" :
        formatjavadoc(can_root+cprop.getAttribute("class")+".java", cprop.getAttribute("method"), cprop.getAttribute("name"),1)
    if cprop.getAttribute("halmapping") == "subscribe" :
        formatjavadoc(can_root+cprop.getAttribute("class")+".java", "register"+cprop.getAttribute("method"), cprop.getAttribute("name"),1)
        formatjavadoc(can_root+cprop.getAttribute("class")+".java", "unregister"+cprop.getAttribute("method"), cprop.getAttribute("name"),1)
    if cprop.getAttribute("halmapping") == "listener" :
        formatjavadoc(can_root+cprop.getAttribute("class")+".java", cprop.getAttribute("method"), cprop.getAttribute("name"),1)

# def write_at_last(file,line):
# contents = [""]

# try :
#     f = open(file, "r")
#     contents = f.readlines()
#     f.close()
# except IOError:
#     print("file don't exist, creating")


# line=line+"\n"
# contents.append(line)

# f = open(file, "w")
# contents = "".join(contents)
# f.write(contents)
# f.close()