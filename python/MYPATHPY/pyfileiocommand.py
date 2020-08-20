#!/usr/bin/python
import sys
import os
import getopt
from amaifilelib.exceptionbuilder import exception_builder
from amaifilelib.exceptionbuilder import hint_builder
from amaifilelib.exceptionbuilder import exceptions
from amaifilelib.fileope import get_token_line
from amaifilelib.fileope import get_file
from amaifilelib.fileope import token_builder
from amaifilelib.fileope import add_line
from amaifilelib.fileope import del_line

gopathfile = "/home/amai/Work/MY-github/work_tool/shell/MYPATHSHELL/gopath"

def add_gop(sharg):
    if (sharg == "") :
        exception_builder(0)       
    
    args = sharg.split(',', -1)
    if (len(args) != 2) :
        exception_builder(0)
    if (os.path.exists(args[1])) :
        #build input line
        # usage_line = " \t" + token_builder(args[0]) + "\n\techo \"" + args[0] + ": " + args[1] + "\""
        usage_line = " \t" + token_builder(args[0]) + "\n\techo \"" + args[0] + ": ${" + args[0] + "_dir}\""
        dir_line = token_builder(args[0]) + "\n" + args[0] + "_dir=" + args[1]
        cmd_line = token_builder(args[0]) + "\nelif [ $1 == \"" + args[0] + "\" ]; then\n\
\techo \"gopath " + args[1] +"\"\n\
\tcd ${" + args[0] + "_dir}"

        #insert line to gopathfile
        if ( -1 == get_token_line(gopathfile, token_builder(args[0]))) :
            try :
                print("... add usage to gopath script")
                add_line(gopathfile, get_token_line(gopathfile,  "#token_insert_usage"), usage_line)
                print("... add dir to gopath script")
                add_line(gopathfile, get_token_line(gopathfile,  "#token_insert_dir"), dir_line)
                print("... add cmd to gopath script")
                add_line(gopathfile, get_token_line(gopathfile,  "#token_insert_cmd"), cmd_line)
            except UserWarning:
                print(hint_builder("gopath file has been compromised", "re-install or add token to source file")) 
        else:
            exception_builder(2)
        
        #sync
        os.system("worker syncgop")
        print("gopath cmd \" gop " + args[0] + "\" now is ready")

    else :
        exception_builder(1)

def del_gop(sharg):
    if (sharg == "") :
        exception_builder(0)       
    
    # args = sharg.split(',', -1)
    # if (len(args) != 2) :
    #     exception_builder(0)
    token = token_builder(sharg)
    if (get_token_line(gopathfile,  token) != -1) :
        #del line
        try :
            del_usage = get_token_line(gopathfile,  token)
            print("... del usage to gopath script")
            del_line(gopathfile, del_usage)
            del_line(gopathfile, del_usage)
            
            del_dir = get_token_line(gopathfile,  token)
            print("... del dir to gopath script")
            del_line(gopathfile, del_dir)
            del_line(gopathfile, del_dir)

            del_cmd = get_token_line(gopathfile,  token)
            print("... del cmd to gopath script")
            del_line(gopathfile, del_cmd)
            del_line(gopathfile, del_cmd)
            del_line(gopathfile, del_cmd)
            del_line(gopathfile, del_cmd)
        except UserWarning:
            print(hint_builder("gopath file has been compromised", "re-install or add token to source file")) 
        
        #sync
        os.system("worker syncgop")
        print("gopath cmd \" gop " + sharg + "\" now is deleted")

    else :
        exception_builder(4)

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
            print('a : add gopath cmd')
            sys.exit()
        elif opt in ("-f", "--func"):
            func = arg
            print('func', func)
        elif opt in ("-a", "--args"):
            args = arg

    if func == "agop":
        print('func: add gopath shortcuts cmd "gop ' + args[0] + '" refer to gopath ' + args[2])
        add_gop(args)
    elif func == "dgop":
        print('func: del gopath shortcuts cmd "gop ' + args[0] + '"')
        del_gop(args)

if __name__ == "__main__":
    main(sys.argv[1:])