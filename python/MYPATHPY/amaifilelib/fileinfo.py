#!/usr/bin/python
import sys
import re

# 
# @param fd
# 
# get line number
# 
def getlinenumber(fd) :
    count = 0
    fd.seek(0, 0)
    for line in fd.readlines():
        count=count+1
    fd.seek(0, 0)
    return count
