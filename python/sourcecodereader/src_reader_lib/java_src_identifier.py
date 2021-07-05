#!/usr/bin/python
import sys

def java_src_is_package(line) :
    if 'package' in line :
        line = line.replace(';', '')
        lineelem = line.split(' ')
        if lineelem[0] == 'package':
            return True
        else :
            return  False

def java_src_is_import(line) :
    if 'import' in line :
        return True
    else :
        return False

def java_src_is_class(line) :
    if 'class' in line :
        return True
    else :
        return False

def java_src_is_privatefield(line) :
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


def java_src_is_publicfield(line) :
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

def java_src_is_publicmethod(line) :
    if 'public' in line :
        if "(" not in line :
            return False
        if "abstract"  in line :
            return False
        if java_src_is_class(line) :
            return False
        if java_src_is_publicfield(line) :
            return False
        else :
            return True
    else :
        return False


def java_src_is_privatemethod(line) :
    if 'private' in line :
        if "(" not in line :
            return False
        if java_src_is_class(line) :
            return False
        if java_src_is_privatefield(line) :
            return False
        else :
            return True
    else :
        return False