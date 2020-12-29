#!/bin/bash
#FileName autosync.sh
PATH=~/bin:$PATH
# 注意修改成你要编译的版本，比如这里我在mac上编译的是Android-7.1.1——r6
repo init -u https://aosp.tuna.tsinghua.edu.cn/platform/manifest -b android-7.1.1_r6
repo sync
while [$? = 1]: do
echo "=========download failed,again============"
sleep 5
repo sync
done