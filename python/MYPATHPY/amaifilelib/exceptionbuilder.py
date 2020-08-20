#!/usr/bin/python
import sys
import os
import getopt

def hint_builder(reason, hint, hint_cmd = '', state = 'FAILED: operation failed'):
	if (hint_cmd == '') :
		return state + '\ncaused by : '+ reason + '\n--' + hint + '\n'
	return state + '\ncaused by : '+ reason + '\n--' + hint + '\n\trun : \n\t' + hint_cmd

exceptions = {
	0 : 'wrong arguments',
	1 : 'nonexist path',
	# 2 : 'alias exist \n-- if you want to change uasge , try to delete the old one\n\trun : \n\t\"gop del [alias]\"'
	2 : hint_builder('alias exist', 'if you want to change alias, try to delete the old one', 'gop del [alias]'),
	3 : 'can\'t find line',
	4 : hint_builder('alias non-exist', 'you can\'t delete a non-exist alias', '\"gop -h\" to inspect current available alias')
}

def exception_builder(ex):
	raise UserWarning(exceptions.get(ex))
	exit(0)

