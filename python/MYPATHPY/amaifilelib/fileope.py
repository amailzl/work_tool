#!/usr/bin/python
import sys
import re
from amaifilelib.fileinfo import getlinenumber

# 
# @param filepath
# @return fd
# 
# try to create file in a+ mode
# 
def get_file(file) :
    try :
        f = open (file, 'a+')
        return f
    except IOError:
        print('[IOError] get_file failed: ' + file)
        exit(2)

# 
# @param filepath
# @return fd
# 
# try to create file in w+ mode
# 
def get_clear_file(file) :
    try :
        f = open (file, 'w+')
        return f
    except IOError:
        print('[IOError] get_clear_file failed: ' + file)
        exit(2)

# 
# @param filepath
# @param linenumber
# @param content
# @return ret
# 
# try to add a line at specified linenumber
# 
def add_line(file, line, content) :
    fd = get_file(file)
    ln = getlinenumber(fd)
    if(line > ln) :
        fd.write(content)
        fd.write("\n")
    else :
        prec = get_line(file, 0, line - 1)
        rearc = get_line(file, line, 0)
        content = prec + content + "\n" + rearc
        close_file(fd)
        fd = get_clear_file(file)
        fd.write(content)

    return True
    close_file(fd)
    

# 
# @param filepath
# @param linenumber
# @param linenumber
# @return content
# 
# get content bewteen specified lines
# 
def get_line(file, startline, endline = 0) :
    fd = get_file(file)
    content = ""
    c = 0
    if (startline == endline == 0) :
        return content
    if (startline > endline) :
        endline = getlinenumber(fd)
    fd.seek(0, 0)
    for line in fd.readlines():
        c = c + 1
        if(c >= startline) :
            content = content + line
            if (c >= endline):
                break
    
    print (content)
    return content

    
# 
# @param fd
# 
# try to close an opened file
# 
def close_file(f) :
    try :
        f.close()
        return True
    except IOError:
        print('[IOError] file '+ file +'close failed')
        exit(2)