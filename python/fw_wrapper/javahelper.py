import argparse
import javalang
from javalang.tree import *

filelist = [
'AmbientLightController.java',\
'DriveAssistController.java',\
'HvacController.java',\
'LightController.java',\
'PersonalDriveModeController.java',\
'PowertainController.java',\
'SeatController.java',\
'VehicleStatusController.java',\
'WindowController.java'
]
can_root="/home/amai/Work/PATAC/REPO/vcs/vendor/patac/frameworks/base/core/java/com/patac/vehicle/"

def get_hal_method(code):
    if "set" in code :
        return "set"
    elif "get" in code :
        return "get"
    else :
        return "subscribe"

def write_at_last(file,line):
    contents = [""]

    try :
        f = open(file, "r")
        contents = f.readlines()
        f.close()
    except IOError:
        print("file don't exist, creating")


    line=line+"\n"
    contents.append(line)

    f = open(file, "w")
    contents = "".join(contents)
    f.write(contents)
    f.close()

# parser = argparse.ArgumentParser()
# parser.description = "script to parse java source code"
# parser.add_argument("-f", "--file", help="target java file path", dest="file", type=str, default="")

write_at_last("controller.xml", "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<Controller>\
")
for e in filelist : 
    #get src
    # arg =  parser.parse_args().file
    print(e)
    fd = open (can_root+e, 'r')
    tree = javalang.parse.parse(fd.read())

    # tokens = list(javalang.tokenizer.tokenize('System.out.println("Hello " + "world");'))
    wrapper_method=""
    hal_method=""

    #property only valid if a class (not main class) or method encountered
    property_encounter=False
    class_name = tree.types[0].name

    for path,node in tree:
        # print(type(node))
        # print(node)
        if isinstance(node, MethodInvocation):
            hal_method=node.member
        if isinstance(node, ClassDeclaration) and node.name != class_name:
            property_encounter = True
            wrapper_method = node.name
        if isinstance(node, MethodDeclaration):
            property_encounter = True
            wrapper_method = node.name
        if isinstance(node, MemberReference):
            if (node.qualifier == "PatacProperty" or node.qualifier == "VendorProperty" or node.qualifier == "VehicleProperty"):
                # print("")
                if property_encounter == True :
                    hal_method = get_hal_method(hal_method)
                elif property_encounter == False :
                    hal_method = "unknown"
                # print (wrapper_method)
                # print (node.qualifier)
                # print (node.member)
                property_xml_line="    <property class=\""+class_name+"\" name=\""+node.member+"\" namespace=\""+node.qualifier+"\" method=\""+wrapper_method+"\" halmapping=\""+hal_method+"\" />"
                write_at_last("controller.xml", property_xml_line)
                property_encounter = False

write_at_last("</Controller>")