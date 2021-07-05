from src_reader_lib.java_src_identifier import *

def print_method(src):
    f = open (src, 'r')
    for line in f.readlines():
        # if is_java(src) :
        if java_src_is_publicmethod(line):
            print(line.replace('public', '').replace("{", "").replace("\n",""))
    f.close()    