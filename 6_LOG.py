#!/usr/bin/python
import sys
import os
import getopt

def exct_sys_cmd(arg):
    logtag = "adb shell logcat -s"
    if "r" in arg:
        logtag = logtag + " RadioAppService"
    if "c" in arg:
        logtag = logtag + " Comdtuner"
    if "n" in arg:
        logtag = logtag + " NHuCom"
    if "a" in arg:
        logtag = logtag + " RadioModelAPI"
    if "R" in arg:
        logtag = logtag + " AndroidRuntime"
    if "E" in arg:
        logtag = "adb logcat *:E"
    print(logtag)
    os.system("adb shell setprop persist.iauto.log.switch 31")
    os.system("adb shell logcat -G 20m")
    os.system(logtag)

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"ha:",["args="])
    except getopt.GetoptError:
        print('usage -a <args>')
        print('or: usage --args=<args>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('usage -a <args>')
            print('or: usage --args=<args>')
            print('r : RadioAppService')
            print('c : Comdtuner')
            print('n : NHuCom')
            print('a : RadioModelAPI')
            print('R : AndroidRuntime')
            print('E : *:E')
            sys.exit()
        elif opt in ("-a", "--args"):
            args = arg
            print('args', args)

    exct_sys_cmd(args)

if __name__ == "__main__":
    main(sys.argv[1:])