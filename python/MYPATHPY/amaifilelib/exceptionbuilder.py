#!/usr/bin/python
import sys
import os
import getopt

def hint_builder(reason, hint, hint_cmd = '', state = 'FAILED: operation failed'):
	if (hint_cmd == '') :
		return state + '\ncaused by : '+ reason + '\n--' + hint + '\n'
	return state + '\ncaused by : '+ reason + '\n--' + hint + '\n\trun : \n\t\"' + hint_cmd + '\"'

exceptions = {
	0 : 'wrong arguments',
	1 : 'nonexist path',
	# 2 : 'usage exist \n-- if you want to change uasge , try to delete the old one\n\trun : \n\t\"gop del [usage]\"'
	2 : hint_builder('usage exist', 'if you want to change usage, try to delete the old one', 'gop del [usage]'),
	3 : 'can\'t find line'
}

def exception_builder(ex):
	raise UserWarning(exceptions.get(ex))
	exit(0)

