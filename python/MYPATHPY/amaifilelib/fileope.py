#!/usr/bin/python
import sys
import re
from amaifilelib.exceptionbuilder import exception_builder

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
    if (line < 0) :
        exception_builder(3)
    fd = get_file(file)
    ln = get_line_number(fd)
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
# @return ret
# 
# try to del a line at specified linenumber
# 
def del_line(file, line) :
    if (line < 0) :
        exception_builder(3)
    fd = get_file(file)
    ln = get_line_number(fd)
    if(line > ln) :
        exception_builder(3)
    else :
        prec = get_line(file, 0, line - 1)
        rearc = get_line(file, line + 1)
        content = prec + rearc
        close_file(fd)
        fd = get_clear_file(file)
        # print(content)
        # print('\n')
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
        endline = get_line_number(fd)
    fd.seek(0, 0)
    for line in fd.readlines():
        c = c + 1
        if(c >= startline) :
            content = content + line
            if (c >= endline):
                break
    
    # print (content)
    return content

# 
# @param fd
# 
# get line number
# 
def get_line_number(fd) :
    count = 0
    fd.seek(0, 0)
    for line in fd.readlines():
        count=count+1
    fd.seek(0, 0)
    return count

# 
# @param fd
# @param token
# 
# get token offset
# 
def get_token_line(file, token) :
    # print("finding token : " + token + " in " + file)
    fd = get_file(file)
    count = 0
    find = False
    fd.seek(0, 0)
    for line in fd.readlines():
        count = count + 1
        if token in line :
            find = True
            break
    fd.seek(0, 0)

    close_file(fd)
    if(find == False) :
        return -1
    else :
        return count

# 
# @param token
# 
# get file token
# 
def token_builder(token) :
    return ("#token_"+ token)