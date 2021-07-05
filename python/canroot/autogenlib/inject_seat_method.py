from autogenlib.fileope import *

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

    write_at_index(file,indent+indent+indent+"VehicleController.getInstance().setValue("+propertyvalue[11]+"."+propertyvalue[4]+", VehicleArea.seat, value);")
    write_at_index(file,indent+indent+indent+"return ERROR_NONE;")
    write_at_index(file,"        } else {\n\
            Log.e(TAG, \"unsupported ARCH!\");\n\
            return ERROR_UNSURPPORT_ARCH;\n\
        }\n\
    }")
    print("end inject set method of "+propertyvalue[4])

def inject_seat_get_method(file,propertyvalue):
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
    write_at_index(file,indent+"* see {@link #register"+propertyvalue[3]+"listener} and {@link #unregister"+propertyvalue[3]+"Listener}")
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
    value_type=get_value_type(propertyvalue[7])
    test_value=get_test_value(propertyvalue[7])
    propertyvalue[12]=int(propertyvalue[12])
    arch=get_arch(propertyvalue[0])
    print("start inject test get method of "+propertyvalue[4])
    write_at_index(file,"")
    write_at_index(file,"    @Test\n\
    public void test_"+propertyvalue[3]+"Listener() {\n\
        m"+propertyvalue[2].replace("Controller","")+"Ctrl.register"+propertyvalue[3]+"Listener(\n\
                m"+propertyvalue[2].replace("Controller","")+"Ctrl.new "+propertyvalue[3]+"Listener() {\n\
                    @Override\n\
                    public void on"+propertyvalue[3]+"Changed("+value_type+" value) {\n\
                        synchronized (mLock) {\n\
                            Log.d(TAG, \"[on"+propertyvalue[3]+"Changed]: \" + value);\n\
                            mLock.notify();\n\
                        }\n\
                    }\n\
                });\n\
        // "+propertyvalue[4]+" = "+str(propertyvalue[12])+"")
    if propertyvalue[8] != "" :
        for e in propertyvalue[8].split(","):
            if "=" in e:
                write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \""+e.split("=")[1]+"\");")
    else:
        if value_type == "int":
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"0\");")
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"1\");")
        elif value_type == "Boolean":
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"true\");")
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"false\");")
        elif value_type == "float":
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"100.1\");")
            write_at_index(file,"        injectHalEventAndLock(\""+str(propertyvalue[12])+"\", \"0.1\");")

    write_at_index(file,"    }")

