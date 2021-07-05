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
indent="    "
method_seat_area=[
'1stRowLeft',\
'1stRowRight',\
'2ndRowLeft',\
'2ndRowRight',\
'3rdRowLeft',\
'3rdRowRight'\
]

vehicle_seat_area=[
'VehicleAreaSeat.SEAT_ROW_1_LEFT',\
'VehicleAreaSeat.SEAT_ROW_1_RIGHT',\
'VehicleAreaSeat.SEAT_ROW_2_LEFT',\
'VehicleAreaSeat.SEAT_ROW_2_RIGHT',\
'VehicleAreaSeat.SEAT_ROW_3_LEFT',\
'VehicleAreaSeat.SEAT_ROW_3_RIGHT']

notation_seat_area=[
'first row left seat(AKA. driver seat)',\
'first row right seat(AKA. passenger seat)',\
'second row left seat(AKA. rear left seat)',\
'second row right seat(AKA. rear right seat)',\
'third row left seat',\
'third row right seat']

def write_global_property(file,propertyvalue) :
    access=get_acccess_type(propertyvalue[9])

    if(access==3 or access==2) :
        inject_global_set_method(file,propertyvalue)

    if(access==3 or access==1) :
        inject_global_get_method(file,propertyvalue)
        inject_global_listener(file,propertyvalue)


def write_global_property_test(file,propertyvalue) :
    access=get_acccess_type(propertyvalue[9])

    if(access==3 or access==2) :
        inject_global_set_test_method(file,propertyvalue)

    if(access==3 or access==1) :
        inject_global_get_test_method(file,propertyvalue)
        inject_global_listener_test(file,propertyvalue)


def write_seat_property(file,propertyvalue) :
    access=get_acccess_type(propertyvalue[9])

    if(access==3 or access==2) :
        inject_seat_set_method(file,propertyvalue)

    if(access==3 or access==1) :
        inject_seat_get_method(file,propertyvalue)
        inject_seat_listener(file,propertyvalue)


def write_seat_property_test(file,propertyvalue) :
    access=get_acccess_type(propertyvalue[9])

    if(access==3 or access==2) :
        inject_seat_set_test_method(file,propertyvalue)

    if(access==3 or access==1) :
        inject_seat_get_test_method(file,propertyvalue)
        inject_seat_listener_test(file,propertyvalue)

def main():
    env=setupenv()
    env.create_can_root()
    excelhp=excelhelper(env)
    start = 126
    end = 148
    while True:
        propertyvalue=excelhp.read_property(start)
        if propertyvalue is None :
            break
        print("encounter property " + propertyvalue[4])
        if 1 != propertyvalue[14]:
            start=start+1
            if start == end :
                break
            continue
        propertyvalue[8]=propertyvalue[8].replace(" ", "").replace("\n", "")
        controllerfile=env.get_wrapper_root()+propertyvalue[2]+".java"
        controllertestfile=env.get_wrapper_test_root()+propertyvalue[2]+"Test.java"

        # controllerfile="out/"+propertyvalue[2]+".java"
        # controllertestfile="out/"+propertyvalue[2]+"Test.java"
        if "GLOBAL" in propertyvalue[10] :
            # write_global_property(controllerfile,propertyvalue)
            write_global_property_test(controllertestfile,propertyvalue)
        elif "SEAT" in propertyvalue[10] :
            write_seat_property(controllerfile,propertyvalue)
            write_seat_property_test(controllerfile,propertyvalue)
        start=start+1
        if start == end :
            break


def inject_global_set_method(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject set method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for "+propertyvalue[1]+".")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    if propertyvalue[8] != "" :
        write_at_index(file,indent+"* @param value, could be")
        write_at_index(file,indent+"* <ol>")
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,indent+"* <li> "+e.split("=")[0].upper()+"="+e.split("=")[1]+" .")
        write_at_index(file,indent+"* </ol>")
    write_at_index(file,indent+"* @return errocode {@link #ERROR_NONE} or {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public int set"+propertyvalue[3]+"("+value_type+" value) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return ERROR_UNSURPPORT_CALIBRATION;\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,indent+indent+indent+"VehicleController.getInstance().setValue("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.GLOBAL, value);")
    write_at_index(file,indent+indent+indent+"return ERROR_NONE;")
    write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    print("end inject set method of "+propertyvalue[4])

def inject_global_get_method(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for "+propertyvalue[1]+".")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    write_at_index(file,indent+"* @return errorcode, {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}")
    write_at_index(file,indent+"* or returns value if no error .")
    write_at_index(file,indent+"* @throws UnavailableSignalValueException .")
    if propertyvalue[8] != "" :
        write_at_index(file,indent+"* value could be")
        write_at_index(file,indent+"* <ol>")
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,indent+"* <li> "+e.split("=")[0].upper()+"="+e.split("=")[1]+" .")
        write_at_index(file,indent+"* </ol>")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public "+value_type+" get"+propertyvalue[3]+"() throws UnavailableSignalValueException {")
    if propertyvalue[5]!="":
        if value_type == "int" :
            write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return ERROR_UNSURPPORT_CALIBRATION;\n\
        }")
        if value_type == "Boolean" :
            write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return false;\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,indent+indent+indent+"return VehicleController.getInstance().get"+value_type.capitalize()+"("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.GLOBAL);")
    if value_type == "int" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    if value_type == "Boolean" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return false;\n\
        }\n\
    }")
    if value_type == "float" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    print("end inject get method of "+propertyvalue[4])

def inject_global_listener(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject listener of "+propertyvalue[4])
    #register method
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for register"+propertyvalue[3]+"Listener.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public void register"+propertyvalue[3]+"Listener("+propertyvalue[3]+"Listener l) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,"            if (l != null) {\n\
                VehicleController.getInstance().registerSignalCallback(l);\n\
            } else {\n\
                Log.e(TAG, \"Listener is null\");\n\
            }\n\
        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
        }\n\
    }")

    #unregister method
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for unregister"+propertyvalue[3]+"Listener.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public void unregister"+propertyvalue[3]+"Listener("+propertyvalue[3]+"Listener l) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")
    write_at_index(file,"            if (l != null) {\n\
                VehicleController.getInstance().unregisterSignalCallback(l);\n\
            } else {\n\
                Log.w(TAG, \"Listener is null\");\n\
            }\n\
        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
        }\n\
    }")
    #listener
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this class is used for listen to "+propertyvalue[1]+" event.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    write_at_index(file,indent+"* see {@link #register"+propertyvalue[3]+"Listener} and {@link #unregister"+propertyvalue[3]+"Listener}")
    write_at_index(file,indent+"*/")
    write_at_index(file,"    public abstract static class "+propertyvalue[3]+"Listener extends SignalListener<"+get_listener_type(value_type)+"> {")
    if propertyvalue[8] != "" :
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,"        public static final int "+e.split("=")[0].upper()+" = "+e.split("=")[1]+";")

    write_at_index(file,"")
    write_at_index(file,"        public "+propertyvalue[3]+"Listener() {\n\
            super("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.GLOBAL, CarPropertyManager.SENSOR_RATE_ONCHANGE);\n\
        }\n\
\n\
        protected "+propertyvalue[3]+"Listener(int propertyId, int area, float rate) {\n\
            super(propertyId, area, rate);\n\
        }\n\
\n\
        protected void onSignalChanged(CarPropertyValue<"+get_listener_type(value_type)+"> value) {\n\
            if(value != null) on"+propertyvalue[3]+"Changed(value.getValue());\n\
        }\n\
\n\
        public abstract void on"+propertyvalue[3]+"Changed("+value_type+" value);\n\
    }")
    print("end inject listener of "+propertyvalue[4])

def inject_global_set_test_method(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject test set method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_set"+propertyvalue[3]+"() {\n\
        int ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.set"+propertyvalue[3]+"("+test_value+");\n\
        Log.d(TAG, \"test_set"+propertyvalue[3]+" : \" + ret);\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.initCalibration(true);\n\
        Assert.assertEquals(ERROR_NONE, m"+propertyvalue[2].replace("Controller","")+"Ctrl.set"+propertyvalue[3]+"("+test_value+"));\n\
    }")

def inject_global_get_test_method(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject test get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_get"+propertyvalue[3]+"() {\n\
        try {\n\
            "+value_type+" ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.get"+propertyvalue[3]+"();\n\
            Log.d(TAG, \"test_get"+propertyvalue[3]+" : \" + ret);\n\
            m"+propertyvalue[2].replace("Controller","")+"Ctrl.initCalibration(true);\n\
            ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.get"+propertyvalue[3]+"();\n\
            Log.d(TAG, \"test_get"+propertyvalue[3]+" : \" + ret);\n\
        } catch (UnavailableSignalValueException e) {\n\
            // TODO Auto-generated catch block\n\
            e.printStackTrace();\n\
        }\n\
    }")

def inject_global_listener_test(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    # propertyvalue[12]=int(propertyvalue[12])
    arch=get_arch(propertyvalue[0])
    print("start inject test get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_"+propertyvalue[3]+"Listener() {\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.register"+propertyvalue[3]+"Listener(\n\
                new "+propertyvalue[2]+"."+propertyvalue[3]+"Listener() {\n\
                    @Override\n\
                    public void on"+propertyvalue[3]+"Changed("+value_type+" value) {\n\
                        Log.d(TAG, \"[on"+propertyvalue[3]+"Changed]: \" + value);\n\
                    }\n\
                });\n\
        // "+propertyvalue[4]+" = "+propertyvalue[11]+"."+propertyvalue[4]+"")
    if propertyvalue[8] != "" :
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \""+e.split("=")[1]+"\");")
    else:
        if value_type == "int":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"0\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"1\");")
        elif value_type == "Boolean":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"true\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"false\");")
        elif value_type == "float":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"100.1\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"0.1\");")

    write_at_index(file,"    }")


def inject_seat_set_method(file,propertyvalue):
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject set method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for "+propertyvalue[1]+".")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    if propertyvalue[8] != "" :
        write_at_index(file,indent+"* @param value, could be")
        write_at_index(file,indent+"* <ol>")
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,indent+"* <li> "+e.split("=")[0].upper()+"="+e.split("=")[1]+" .")
        write_at_index(file,indent+"* </ol>")
    write_at_index(file,indent+"* @return errocode {@link #ERROR_NONE} or {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public int set"+propertyvalue[3]+"(int area, "+value_type+" value) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return ERROR_UNSURPPORT_CALIBRATION;\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,indent+indent+indent+"VehicleController.getInstance().setValue("+propertyvalue[11]+"."+propertyvalue[4]+", area, value);")
    write_at_index(file,indent+indent+indent+"return ERROR_NONE;")
    write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")

    area=0
    while area < 6 :
        write_at_index(file,"\n\
    /**\n\
     * Used for "+notation_seat_area[area]+" "+propertyvalue[1]+" control.\n\
     *\n\
     * @return ErrorCode see {@link #set"+propertyvalue[3]+"} for detail\n\
     */\n\
    public int set"+method_seat_area[area]+propertyvalue[3]+"("+value_type+" value) {\n\
        return set"+propertyvalue[3]+"("+vehicle_seat_area[area]+", value);\n\
    }")
        area=area+1

    print("end inject set method of "+propertyvalue[4])

def inject_seat_get_method(file,propertyvalue):
    # pass
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for "+propertyvalue[1]+".")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    write_at_index(file,indent+"* @return errorcode, {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}")
    write_at_index(file,indent+"* or returns value if no error .")
    if propertyvalue[8] != "" :
        write_at_index(file,indent+"* value could be")
        write_at_index(file,indent+"* <ol>")
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,indent+"* <li> "+e.split("=")[0].upper()+"="+e.split("=")[1]+" .")
        write_at_index(file,indent+"* </ol>")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public "+value_type+" get"+propertyvalue[3]+"() {")
    if propertyvalue[5]!="":
        if value_type == "int" :
            write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return ERROR_UNSURPPORT_CALIBRATION;\n\
        }")
        if value_type == "Boolean" :
            write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
            return false;\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,indent+indent+indent+"return VehicleController.getInstance().get"+value_type.capitalize()+"("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.seat);")
    if value_type == "int" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    if value_type == "Boolean" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return false;\n\
        }\n\
    }")
    if value_type == "float" :
        write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    print("end inject get method of "+propertyvalue[4])

def inject_seat_listener(file,propertyvalue):
    # pass
    value_type=get_value_type(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject listener of "+propertyvalue[4])
    #register method
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for register"+propertyvalue[3]+"Listener.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public void register"+propertyvalue[3]+"Listener("+propertyvalue[3]+"Listener l) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")

    write_at_index(file,"            if (l != null) {\n\
                VehicleController.getInstance().registerSignalCallback(l);\n\
            } else {\n\
                Log.e(TAG, \"Listener is null\");\n\
            }\n\
        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
        }\n\
    }")

    #unregister method
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this method is used for unregister"+propertyvalue[3]+"Listener.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"*/")
    write_at_index(file,indent+"public void unregister"+propertyvalue[3]+"Listener("+propertyvalue[3]+"Listener l) {")
    if propertyvalue[5]!="":
        write_at_index(file,"        if (!"+propertyvalue[5]+") {\n\
            Log.e(TAG, \"not support in calibrations !\");\n\
        }")


    if arch == 0:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch()) {")
    elif arch == 1:
        write_at_index(file,indent+indent+"if (VehicleController.isCleaArch() || VehicleController.isGBArch()) {")
    write_at_index(file,"            if (l != null) {\n\
                VehicleController.getInstance().unregisterSignalCallback(l);\n\
            } else {\n\
                Log.w(TAG, \"Listener is null\");\n\
            }\n\
        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
        }\n\
    }")
    #listener
    write_at_index(file,"")
    write_at_index(file,indent+"/**")
    write_at_index(file,indent+"* this class is used for listen to "+propertyvalue[1]+" event.")
    write_at_index(file,indent+"*")
    write_at_index(file,indent+"* supported arch : "+propertyvalue[0]+".")
    write_at_index(file,indent+"* property access : "+propertyvalue[9]+".")
    write_at_index(file,indent+"* see {@link #register"+propertyvalue[3]+"Listener} and {@link #unregister"+propertyvalue[3]+"Listener}")
    write_at_index(file,indent+"*/")
    write_at_index(file,"    public abstract class "+propertyvalue[3]+"Listener extends SignalListener<"+get_listener_type(value_type)+"> {")
    if propertyvalue[8] != "" :
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,"        public static final int "+e.split("=")[0].upper()+" = "+e.split("=")[1]+";")

    write_at_index(file,"")
    write_at_index(file,"        public "+propertyvalue[3]+"Listener() {\n\
            super("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.seat, CarPropertyManager.SENSOR_RATE_ONCHANGE);\n\
        }\n\
\n\
        protected "+propertyvalue[3]+"Listener(int propertyId, int area, float rate) {\n\
            super(propertyId, area, rate);\n\
        }\n\
\n\
        protected void onSignalChanged(CarPropertyValue<"+get_listener_type(value_type)+"> value) {\n\
            if(value != null) on"+propertyvalue[3]+"Changed(value.getValue());\n\
        }\n\
\n\
        public abstract void on"+propertyvalue[3]+"Changed("+value_type+" value);\n\
    }")
    print("end inject listener of "+propertyvalue[4])

def inject_seat_set_test_method(file,propertyvalue):
    # pass
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject test set method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_set"+propertyvalue[3]+"() {\n\
        int ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.set"+propertyvalue[3]+"("+test_value+");\n\
        Log.d(TAG, \"test_set"+propertyvalue[3]+" : \" + ret);\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.initCalibration(true);\n\
        Assert.assertEquals(ERROR_NONE, m"+propertyvalue[2].replace("Controller","")+"Ctrl.set"+propertyvalue[3]+"("+test_value+"));\n\
    }")

def inject_seat_get_test_method(file,propertyvalue):
    # pass
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    arch=get_arch(propertyvalue[0])
    print("start inject test get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_get"+propertyvalue[3]+"() {\n\
        "+value_type+" ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.get"+propertyvalue[3]+"();\n\
        Log.d(TAG, \"test_get"+propertyvalue[3]+" : \" + ret);\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.initCalibration(true);\n\
        ret = m"+propertyvalue[2].replace("Controller","")+"Ctrl.get"+propertyvalue[3]+"();\n\
        Log.d(TAG, \"test_get"+propertyvalue[3]+" : \" + ret);\n\
    }")

def inject_seat_listener_test(file,propertyvalue):
    # pass
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    # propertyvalue[12]=int(propertyvalue[12])
    arch=get_arch(propertyvalue[0])
    print("start inject test get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_"+propertyvalue[3]+"Listener() {\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.register"+propertyvalue[3]+"Listener(\n\
                m"+propertyvalue[2].replace("Controller","")+"Ctrl.new "+propertyvalue[3]+"Listener() {\n\
                    @Override\n\
                    public void on"+propertyvalue[3]+"Changed("+value_type+" value) {\n\
                        Log.d(TAG, \"[on"+propertyvalue[3]+"Changed]: \" + value);\n\
                    }\n\
                });\n\
        // "+propertyvalue[4]+" = "+propertyvalue[11]+"."+propertyvalue[4]+"")
    if propertyvalue[8] != "" :
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \""+e.split("=")[1]+"\");")
    else:
        if value_type == "int":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"0\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"1\");")
        elif value_type == "Boolean":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"true\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"false\");")
        elif value_type == "float":
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"100.1\");")
            write_at_index(file,"        injectHalEventAndWait("+propertyvalue[11]+"."+propertyvalue[4]+", \"0.1\");")

    write_at_index(file,"    }")



def get_acccess_type(access):
    if "WRITE" in access and "READ" in access:
        return 3
    elif "WRITE" in access:
        return 2
    elif "READ" in access:
        return 1
    else:
        return 0

def get_value_type(value_type):
    if "INT32" in value_type:
        return "int"
    elif "BOOLEAN" in value_type:
        return "Boolean"
    elif "FLOAT" in value_type:
        return "float"
    else:
        return "T"

def get_test_value(value_type):
    if "INT32" in value_type:
        return "1"
    elif "BOOLEAN" in value_type:
        return "true"
    elif "FLOAT" in value_type:
        return "float"
    else:
        return "T"

def get_listener_type(value_type):
    if "int" == value_type:
        return "Integer"
    elif "Boolean" == value_type:
        return "Boolean"
    elif "float" in value_type:
        return "Float"
    else:
        return "T"

def get_arch(arch):
    if "GB" in arch:
        return 1
    else:
        return 0

main()

# mtokenbuilder=tokenmapbuilder()
# tokenmap=mtokenbuilder.set_property_id("PERF_VEHICLE_SPEED")\
#                     .set_property_namespace("VehiclePropertyIds")\
#                     .set_custom_area_id_enabled(True)\
#                     .set_value_type("boolean")\
#                     .set_enabled(False)\
#                     .get_token_map()
# # # for key in tokenmap.keys() :
# # #     print (key)
# # #     print(tokenmap[key])
# # print(str(write_autogen_property(py_out_dir + "/temp_property",py_out_dir + "/test_dst_file", tokenmap, True)) + " times replacement happened ")

# env=setupenv()
# env.create_can_root()
# excelhp=excelhelper(env)
# excelhp.init_property_sheet()
# # # excelhp.write_property(tokenmap)

# retrive=retrivelegacyproperty(env,excelhp)
# # retrive.retrive_from_legacy_class()
# retrive.retrive_from_hal()
# # excelhp.read_property()