#!/usr/bin/python
import sys
import os

aosp_root=""
keyword="prebuilts"

print(os.system("cat manifest.xml|grep -E "+ keyword))


