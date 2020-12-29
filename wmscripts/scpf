#########################################################################
# @file   : scpf.sh
# @author : Tang Wei
# @e-mail : wei.tang@wm-motor.com
# @date   : Created Time: Fri 17 Apr 2020 05:11:41 PM CST
#########################################################################
#!/bin/bash
#set -x
usage() {
    echo -e "Usage:\n\t Secure copy the remote file to local,\n\t\t scpf remote_src_file_path local_dest_file_path\n\t For example:\n\t\t scpf /scripts/startup.sh ./test.sh\n "
    exit -1
}

if [ 2 -ne $# ]; then
    usage
fi

TAR_IP=${TARGET_HU_IP}
if [ -z "${TAR_IP}" ]; then
    TAR_IP=127.0.0.1
fi
#adb -s 000000009d06c107 forward tcp:8002 tcp:22
adb forward tcp:8002 tcp:22 # use the default device
scp -P 8002 -r root@${TAR_IP}:$1 $2
