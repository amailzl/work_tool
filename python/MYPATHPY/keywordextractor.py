#!/usr/bin/python
import sys
import os
import getopt
from amaifilelib.fileope import get_line_with_keyword

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hs:a:",["src= , args= "])
    except getopt.GetoptError:
        print('usage -s <src> -a <args>')
        print('or: usage --src=<src> --args=<args>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('usage -f <src> -a <args>')
            print('or: usage --src=<src> --args=<args>')
            print('a : add gopath cmd')
            sys.exit()
        elif opt in ("-s", "--src"):
            src = arg
            print('src : ', src)
        elif opt in ("-a", "--args"):
            args = arg
            print('args : ', args)

    tags = arg.split('|', -1)
    print(tags)
    get_line_with_keyword(src, tags)

if __name__ == "__main__":
    main(sys.argv[1:])