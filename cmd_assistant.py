#!/usr/bin/python
import sys
import os
import getopt

def exct_logger_cmd(arg):
    logtag = "adb shell logcat -s"
    if "rs" in arg:
        logtag = logtag + " FW_SVC_RADIO"
    if "rm" in arg:
        logtag = logtag + " RadioManager"
    if "l" in arg:
        logtag = logtag + " lzl"
    if "c" in arg:
        logtag = logtag + " Comdtuner"
    if "n" in arg:
        logtag = logtag + " NHuCom|grep -v \"92 40\""
    if "a" in arg:
        logtag = logtag + " RadioModelAPI RadioModel RadioBaseServiceCommunication"
    if "R" in arg:
        logtag = logtag + " AndroidRuntime"
    if "M" in arg:
        logtag = logtag + " ManagerBase"
    if "&" in arg:
        logtag = logtag + " &"
    if "E" in arg:
        logtag = "adb logcat *:E"
    print(logtag)
    os.system("adb shell setprop persist.iauto.log.switch 31")
    os.system("adb shell logcat -G 20m")
    os.system(logtag)

def exct_test_runner_cmd(arg):
    logtag = "adb shell logcat -s"
    if "e" in arg:
        os.system("adb install -r out/target/product/generic_x86_64/testcases/radio_unit_test/radio_unit_test.apk")
    elif "n" in arg:
        os.system("adb install -r out/target/product/mt2712/testcases/radio_unit_test/radio_unit_test.apk")
    # elif "userde" in arg:
    #     logtag = logtag + " NHuCom"
    # if "a" in arg:
    #     logtag = logtag + " RadioModelAPI"
    # if "R" in arg:
    #     logtag = logtag + " AndroidRuntime"
    # if "E" in arg:
    os.system("adb shell am instrument -w -r -e coverage true com.iauto.radio.tests/android.support.test.runner.AndroidJUnitRunner")
    os.system("adb root")
    os.system("rm -rf ./1_report/*")
    os.system("adb pull /data/user/0/com.iauto.radio.tests/files/coverage.ec ./1_report/coverage.ec")
    os.system("java -jar out/soong/host/linux-x86/framework/jacoco-cli.jar report --classfiles out/target/common/obj/APPS/radio_unit_test_intermediates/jacoco/report-resources/jacoco-report-classes.jar --html 1_report/ --sourcefiles  ivi/frameworks/service/radio/java/ --name coverage 1_report/coverage.ec ")
    os.system("firefox ./1_report/index.html")

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

    if func == "1":
        print('func: logger')
        print('r : RadioAppService')
        print('c : Comdtuner')
        print('n : NHuCom')
        print('a : RadioModelAPI')
        print('R : AndroidRuntime')
        print('E : *:E')
        exct_logger_cmd(args)
    if func == "2":
        print('func: test_runner')
        print('e : emulator')
        print('n : not emulator')
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

if __name__ == "__main__":
    main(sys.argv[1:])