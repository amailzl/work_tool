#!/usr/bin/python
import sys

def ispackage(line) :
    if 'package' in line :
        line = line.replace(';', '')
        lineelem = line.split(' ')
        if lineelem[0] == 'package':
            return True
        else :
            return  False

def isimport(line) :
    if 'import' in line :
        return True
    else :
        return False

def isclass(line) :
    if 'class' in line :
        if '{' in line :
            return True
        else :
            return False
    else :
        return False

def isprivatefield(line) :
    ret = []
    if 'private' in line :
        if 'void' in line or 'synchronized' in line or 'class' in line :
            return False
        if '){' in line :
            return False
        if ') {' in line :
            return False
        if 'TAG' in line :
            return False
        else :
            return True
    else :
        return False


def ispublicfield(line) :
    ret = []
    if 'public' in line :
        if 'void' in line or 'synchronized' in line or 'class' in line :
            return False
        if '){' in line :
            return False
        if ') {' in line :
            return False
        if 'TAG' in line :
            return False
        else :
            return True
    else :
        return False

def ispublicmethod(line) :
    ret = []
    if 'public' in line :
        if "(" not in line :
            return False
        if isclass(line) :
            return False
        if ispublicfield(line) :
            return False
        else :
            return True
    else :
        return False


def isprivatemethod(line) :
    ret = []
    if 'private' in line :
        if "(" not in line :
            return False
        if isclass(line) :
            return False
        if isprivatefield(line) :
            return False
        else :
            return True
    else :
        return False