#!/bin/bash

function_print_usage(){
	echo "**********************************"
	echo "*         worker ver0.01         *"
	echo "**********************************"
	echo "*usage :                         *"
	echo "* -sshl:                         *"
	echo "**********************************"
	echo "**********************************"
	echo "**********************************"

}

function_ssh_login(){
	echo 'sshpass -p "admin" ssh ws@10.2.32.46'
	sshpass -p "admin" ssh ws@10.2.32.46
}

function_add_usage(){}

function_update_usage_list(){}

function_del_usage(){}

function_print_usage_config(){}

if [ $1 == "" ]; then
	function_print_usage
elif [ $1 == "-sshl" ]; then
	function_ssh_login
fi

