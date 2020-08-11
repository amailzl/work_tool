#!/usr/bin/python
import sys
import os
import getopt
import junitlib.junitextractor
import junitlib.junitprinter

def gettarget(mainclassname) :
    targetfile = mainclassname + 'UnitTest.java'
    os.system('touch '+ targetfile)
    try :
        f = ''
        f = open (targetfile, 'w')
        return f
    except IOError:
        print('[Err] target file open failed: ')
        exit(2)

def junit_test_runner(file):
    target = None
    mainclassname = junitlib.junitextractor.getmainclassname(file)
    target = gettarget(mainclassname)

    junitlib.junitprinter.printdivider('', junitlib.junitprinter.ctosbr('+', 50))
    print ("main class is : " + mainclassname)
    junitlib.junitprinter.printdivider('', junitlib.junitprinter.ctosbr('+', 50))

    junitlib.junitprinter.printjunitdependency(target)
    junitlib.junitprinter.printsourcedependency(file, target)
    junitlib.junitprinter.printjunitbasic(file, target)
    junitlib.junitprinter.printinnerclassbuilder(file, target)
    junitlib.junitprinter.printprivatefield(file, target)
    junitlib.junitprinter.printmethod(file, target)

    target.close()
    sys.exit()

def arg_test_runner(file):
    sys.exit()

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hf:t:",["file= , test= "])
    except getopt.GetoptError:
        print('usage -f <file> -t <test>')
        print('or: usage --file=<file> --test=<test>')
        print('-f  --file= : the source file that you want to generate test code, this attr must be provided')
        print('-t  --test= : the test type associated with the target source file which by default is junit')
        sys.exit(2)

    if opts == []:
        print('ERROR : WRONG USAGE')
        print('usage -f <file> -t <test>')
        print('or: usage --file=<file> --test=<test>')
        print('-f  --file= : the source file you want to generate test code, this attr must be provided')
        print('-t  --test= : the test test associated with the target source file which by default is junit')
        sys.exit(2)

    file = 'novalidfile'
    test = 'novalidtesttype'
    for opt, arg in opts:
        if opt == '-h':
            print('usage -f <file> -t <test>')
            print('or: usage --file=<file> --test=<test>')
            print('-f  --file= : the source file you want to generate test code, this attr must be provided')
            print('-t  --test= : the test test associated with the target source file which by default is junit')
            sys.exit()
        elif opt in ("-f", "--file"):
            file = arg
            print('file', file)
        elif opt in ("-a", "--args"):
            test = arg
            print('args', args)

    if file != 'novalidfile' and file != '':
        if test == 'novalidtesttype' :
            print('info : junit')
            junit_test_runner(file)
        else :
            arg_test_runner(file)

if __name__ == "__main__":
    main(sys.argv[1:])


