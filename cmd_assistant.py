#!/usr/bin/python
import sys
import os
import getopt

def exct_logger_full_tag(arg):
    # os.system("adb shell setprop persist.iauto.log.switch 31")
    # os.system("adb shell setprop persist.log.tag S")
    # os.system("adb shell logcat -G 20m")
    tags = arg.split(',', -1)
    print(tags)
    for tag in tags:
        print (tag)
        open_log = "adb shell setprop persist.log.tag." + tag + " V"
        print (open_log)
        os.system(open_log)

    logtag = "adb shell logcat -s "
    logtag = logtag + arg.replace(',', ' ')
    print(logtag)
    os.system(logtag)

def exct_logger_hotKey(arg):
    os.system("adb shell setprop persist.iauto.log.switch 31")
    os.system("adb shell setprop persist.log.tag S")
    os.system("adb shell logcat -G 20m")
    logtag = "adb shell logcat -s"
    if "rs" in arg:
        logtag = logtag + " FW_SVC_RADIO"
        os.system("adb shell setprop persist.log.tag.FW_SVC_RADIO V")
    if "rm" in arg:
        logtag = logtag + " RadioManager"
        os.system("adb shell setprop persist.log.tag.RadioManager V")
    if "l" in arg:
        logtag = logtag + " lzl"
        os.system("adb shell setprop persist.log.tag.lzl V")
    if "c" in arg:
        logtag = logtag + " SYS_HWH_UCOM_R"
        os.system("adb shell setprop persist.log.tag.SYS_HWH_UCOM_R V")
    if "n" in arg:
        logtag = logtag + " NHuCom|grep -v \"92 40\""
        os.system("adb shell setprop persist.log.tag.NHuCom V")
    if "a" in arg:
        os.system("adb shell setprop persist.log.tag.RadioModelAPI V")
        os.system("adb shell setprop persist.log.tag.RadioModel V")
        os.system("adb shell setprop persist.log.tag.RadioBaseServiceCommunication V")
        logtag = logtag + " RadioModelAPI RadioModel RadioBaseServiceCommunication"
    if "R" in arg:
        os.system("adb shell setprop persist.log.tag.AndroidRuntime V")
        logtag = logtag + " AndroidRuntime"
    if "M" in arg:
        os.system("adb shell setprop persist.log.tag.ManagerBase V")
        logtag = logtag + " ManagerBase"
    if "&" in arg:
        logtag = logtag + " &"
    if "E" in arg:
        logtag = "adb logcat *:E"
    if "V" in arg:
        os.system("adb shell setprop persist.log.tag V")
    if "F" in arg:
        os.system("adb shell setprop persist.log.tag V")
    print(logtag)
    os.system(logtag)

def exct_test_runner_cmd(arg):
    testUnit = "unknown"
    if "r" in arg:
        testUnit = "radio"
    elif "m" in arg:
        testUnit = "media"
    elif "p" in arg:
        testUnit = "radioplugin"


    testMode = "unknown"
    if "e" in arg:
        testMode = "generic_x86_64"
        # os.system("adb install -r out/target/product/generic_x86_64/testcases/media_unit_test/media_unit_test.apk")
    elif "n" in arg:
        testMode = "mt2712"
    os.system("adb install -r out/target/product/" + testMode + "/testcases/" + testUnit+ "_unit_test/" + testUnit + "_unit_test.apk")
    # elif "userde" in arg:
    #     logtag = logtag + " NHuCom"
    # if "a" in arg:
    #     logtag = logtag + " RadioModelAPI"
    # if "R" in arg:
    #     logtag = logtag + " AndroidRuntime"
    # if "E" in arg:
    os.system("adb shell am instrument -w -e coverage true com.iauto."+ testUnit +".tests/android.support.test.runner.AndroidJUnitRunner")
    os.system("adb root")
    os.system("rm -rf ./1_report/*")
    os.system("adb pull /data/user/0/com.iauto." + testUnit + ".tests/files/coverage.ec ./1_report/coverage.ec")
    os.system("java -jar out/soong/host/linux-x86/framework/jacoco-cli.jar report --classfiles out/target/common/obj/APPS/" + testUnit + "_unit_test_intermediates/jacoco/report-resources/jacoco-report-classes.jar --html 1_report/ --sourcefiles  ivi/frameworks/service/"+ testUnit +"/java/M --name coverage 1_report/coverage.ec ")
    # os.system("java -jar out/soong/host/linux-x86/framework/jacoco-cli.jar report --classfiles out/target/common/obj/APPS/" + testUnit + "_unit_test_intermediates/jacoco/report-resources/jacoco-report-classes.jar --html 1_report/ --sourcefiles  ivi/vendor/kaola/kaolafm/plugin/RadioPlugin/java/ --name coverage 1_report/coverage.ec ")
    os.system("firefox ./1_report/index.html&")

def exct_apk_installer_cmd():
    cmd = "adb root;adb remount;adb push out/target/product/mt2712/vendor/app/CarMediaAppServer/CarMediaAppServer.apk /vendor/app/CarMediaAppServer/;adb shell sync ; adb reboot"
    os.system(cmd)

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hf:a:",["function= , args= "])
    except getopt.GetoptError:
        print('usage -f <func> -a <args>')
        print('or: usage --func=<func> --args=<args>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('usage -f <func> -a <args>')
            print('or: usage --func=<func> --args=<args>')
            print('1 : logger')
            print('2 : test_runner')
            print('3 : apk_installer')
            print('4 : tips env')
            print('5 : tips unitTest')
            print('6 : tips mk')
            sys.exit()
        elif opt in ("-f", "--func"):
            func = arg
            print('func', func)
        elif opt in ("-a", "--args"):
            args = arg
            print('args', args)

    if func == "F":
        print('func: logger full tag')
        exct_logger_full_tag(args)
    if func == "1":
        print('func: logger hot key')
        print('r : RadioAppService')
        print('c : Comdtuner')
        print('n : NHuCom')
        print('a : RadioModelAPI')
        print('R : AndroidRuntime')
        print('E : *:E')
        exct_logger_hotKey(args)
    if func == "2":
        print('func: test_runner')
        print('e : emulator')
        print('n : not emulator')
        print('r : radio')
        print('m : media')
        exct_test_runner_cmd(args)
    if func == "3":
        print('func: apk_installer')
        exct_apk_installer_cmd()
    if func == "4":
        print('\ntip 1: [change bsp to normal]\n\tbsp set -m 0\n')
        print('\ntip 2: [close avb]\n\tfastboot flash vbmeta_a vbmeta.img --disable-verity\n\tfastboot flashing unlock\n')
        print('\ntip 3: [log clear]\n\t BLOCK:setprop persist.log.tag S\n\t OPEN: setprop persist.log.tag.LOGTAG V\n')
    if func == "5":
        print('\ntip 1: [jar unit test]\n\tm EMMA_INSTRUMENT=true EMMA_INSTRUMENT_FRAMEWORK=true SKIP_BOOT_JARS_CHECK=true WITH_DEXPREOPT=false -j8\n')
    if func == "6":
        print('\ntip 1: [print info of Android.mk]\n\t$(warning \" LOCALPATH is $(LOCAL_PATH)\")\n')
        print('\ntip 2: [grep of Android files]\n\t cgrep   : C files \n\t jgrep   : Java files \n\t ggrep   : Gradle file \n\t mangrep : Manifest files \n\t mgrep   : MK files \n\t sepgrep : Sepolicy files \n\t resgrep : Xml files \n\t sgrep   : Src files \n')
        print('\ntip 3: [make tips]\n\tmake clean-MODULENAME : make clean of specific module\n\tmake update-api : required after frameworks/base/api changed\n')

if __name__ == "__main__":
    main(sys.argv[1:])