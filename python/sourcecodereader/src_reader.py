#!/usr/bin/python
import sys
import os
import getopt
from src_reader_lib.class_info_printer import *

init_str_value='none'

def print_usage():
    print('usage : python3 src_reader.py -f <file> -a <arg>')
    print('or: python3 src_reader.py --file=<file> --arg=<arg>')
    print('\t-f  --file= : the source file that you want to extract class info')
    print('\t-t  --arg= : the info you want to extract')
    print('\t\t supported arg : ')
    print('\t\t\t m : method')

def check_param(src, arg) :
    if src == init_str_value or src == '' :
        print_usage()
        sys.exit(2)
    if arg == init_str_value or arg == '' :
        print_usage()
        sys.exit(2)
    try :
        f = open (src, 'r')
        f.close()
    except IOError:
        print('[IOError] get_file failed: ' + src)
        exit(2)

def main(argv):
    try:
        opts, param = getopt.getopt(argv,"hf:a:",["file= , arg= "])
    except getopt.GetoptError:
        print(getopt.GetoptError)
        print_usage()
        sys.exit(2)

    if opts == []:
        print("empty opts")
        print_usage()
        sys.exit(2)

    src = init_str_value
    arg = init_str_value
    for opt, param in opts:
        if opt == '-h':        
            print_usage()
            sys.exit()
        elif opt in ("-f", "--file"):
            src = param
            print('file', src)
        elif opt in ("-a", "--args"):
            arg = param
            print('args', arg)

    check_param(src,arg)

    if "m" in arg :
        print_method(src)

if __name__ == "__main__":
    main(sys.argv[1:])

