#!/usr/bin/python
import sys
import re

def getmainclassname(file) :
    lineelem = file.split('/')
    file = lineelem[-1]
    mainclassname = file.replace('.java', '')
    return mainclassname

def getpackagename(line) :
    line = line.replace(';', '')
    line = line.replace('\n', '')
    lineelem = line.split(' ')
    packagename = lineelem[1]
    print("[packagename]" + packagename)
    return packagename

def getclassname(line) :
    ret = ''
    if 'static' in line :
        line = line.replace('static ', '')
    if 'final' in line :
        line = line.replace('final ', '')
    if 'private' in line :
        line = line.replace('private ', '')
    if 'public' in line :
        line = line.replace('public ', '')
    if 'class' in line :
        line = line.replace('class ', '')

    line = line.replace('  ', '')
    lineelem = line.split(' ')
    for elem in lineelem :
        ret = elem
        ret = ret.replace('extends', '')
        ret = ret.replace('implements', '')
        print("[classname]" + ret)
        return ret
    return ret



def getfieldinfo(line) :
    ret = []
    if 'static' in line :
        line = line.replace('static ', '')
    if 'final' in line :
        line = line.replace('final ', '')
    if 'private' in line :
        line = line.replace('private ', '')
    line = line.replace('\n', '')

    fieldtype = ''
    fieldname = ''

    fieldtypeflag = False
    fieldnameflag = False
    line = line.replace('  ', '')
    lineelem = line.split(' ')
    for elem in lineelem :
        if elem == ' ' :
            continue

        if fieldtypeflag == False :
            if elem.endswith(','):
                fieldtypeflag = False
            else :
                fieldtype = fieldtype + elem
                fieldtypeflag = True
                continue

        if fieldtypeflag :
            fieldname = elem
            fieldname = fieldname.replace(';', '')
            fieldnameflag = True
        else :
            fieldtype = fieldtype + elem

        if fieldnameflag :
            ret = [fieldname, fieldtype]
            return ret
    else :
        return ret

def getmethodinfo(line) :
    ret = []
    line = line.replace(' (', '(')
    line = line.replace('  (', '(')
    line = line.replace('   (', '(')
    methodname = ''
    lineelem = line.split(' ')
    for elem in lineelem :
        if '(' in elem :
            nameelem = elem.split('(')
            ret.append(nameelem[0])
            break
    print(line)
    seperateargsstep1 = line.split('(')
    seperateargsstep2 = seperateargsstep1[1].split(')')
    seperateargsdone = seperateargsstep2[0].split(',')
    for args in seperateargsdone :
        elem = args.split(' ')
        print('args' + args)
        for arg in elem :
            if ifcontainsalphabet(arg):
                print('arg' + arg)
                ret.append(arg)
                break
        continue
    return ret

def ifcontainsalphabet(arg) :
    return bool(re.search('[a-z]', arg)) or bool(re.search('[A-Z]', arg))