#!/bin/bash

#FileName forcemd.sh

echo $1 $2 $3 $4
$1 $2 $3 $4
while [$? = 1]
do
echo "=========operation failed,again============"
sleep 5
$1 $2 $3 $4
done