#!/usr/bin/env python

import requests
import re
from bs4 import BeautifulSoup

url ="http://www.juneyaoair.com/pages/Flight/flight.aspx?flightType=OW&sendCity=%E4%B8%8A%E6%B5%B7&sendCode=SHA&arrCity=%E4%B8%BD%E6%B1%9F&arrCode=LJG&directType=N&tripType=D&departureDate=2020-10-10&returnDate=2020-10-10"
# url ="http://www.juneyaoair.com/"
p =0
# s = input()

s ='python'

for p in range(10):
	p = p+1
	kv = {'p':'%d' % p, 'q':'%s' % s}
	r = requests.get(url, params=kv)
	r.encoding ='utf-8'
	so_url = r.request.url
	html = r.text
	print(requests.get(so_url).text)
	soup = BeautifulSoup(html, "html.parser")

# for dl in soup.find_all('dl'):
# 	text = dl.prettify()
# 	search_url = dl.get('data-track-view')
# 	search = re.findall(r'"con":"(.*?)"', search_url)[0]
# 	content = requests.get(search).text
# 	# print(content)
# 	tittle = re.findall(r'<div class="limit_width">\n.*?<a.*?>(.*?)</a>\n.*?<a', text, re.S)[0]
# 	tittle = tittle.replace('<em>', '')
# 	tittle = tittle.replace('</em>', '')
# 	tittle = tittle.replace(' ', '')	
# 	tittle = tittle.replace('\n', '')
# 	fb =open('%s.html' % tittle, 'w', encoding='utf-8')
# 	fb.write(content)
# 	print(search, tittle)

#exit()

# print(search)