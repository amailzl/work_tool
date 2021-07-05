#!/usr/bin/python
# -*- coding: utf-8 -*-
from PIL import Image
import pytesseract
 
# image = Image.open('/home/amai/Work/MY-github/work_tool/python/0_Alpha/Textfromimage/chinese.png')
# image = Image.open('/home/amai/Work/MY-github/work_tool/python/0_Alpha/Textfromimage/test.jpg')
# image = Image.open('/home/amai/Work/MY-github/work_tool/python/0_Alpha/Textfromimage/jp.png')
image = Image.open('/home/amai/Work/MY-github/work_tool/python/0_Alpha/Textfromimage/jp2.jpg')
# content = pytesseract.image_to_string(image, lang='chi_sim')   # 解析图片
content = pytesseract.image_to_string(image, lang='jpn')   # 解析图片
print(content)