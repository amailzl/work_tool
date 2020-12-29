#########################################################################
# @file   : sshcfg.sh
# @author : Tang Wei
# @e-mail : wei.tang@wm-motor.com
# @date   : Created Time: Tue 30 Jun 2020 07:18:12 PM CST
#########################################################################
#!/bin/bash
ssh-keygen -f "/home/tangwei/.ssh/known_hosts" -R [127.0.0.1]:8002
adb root
adb remount
adb push /home/tangwei/Collection/Shell/ssh /system/bin
adb shell "chmod a+x /system/bin/ssh"
adb shell  "ssh  -f -N -g -L 127.0.0.1:8000:10.0.0.2:8000 root@10.0.0.2 
            ssh  -f -N -g -L 127.0.0.1:23:10.0.0.2:23 root@10.0.0.2
            ssh  -f -N -g -L 127.0.0.1:22:10.0.0.2:22 root@10.0.0.2"
