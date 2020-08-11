rm -rf ./fwlib/*
mkdir ./fwlib/arm
mkdir ./fwlib/arm64

sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/framework.jar  ./fwlib
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/boot-framework.vdex  ./fwlib
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot-framework.art  ./fwlib/arm
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot-framework.art.rel  ./fwlib/arm
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot-framework.oat  ./fwlib/arm
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot.art  ./fwlib/arm
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot.art.rel  ./fwlib/arm
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm/boot.oat  ./fwlib/arm

sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot-framework.art  ./fwlib/arm64
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot-framework.art.rel  ./fwlib/arm64
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot-framework.oat  ./fwlib/arm64
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot.art  ./fwlib/arm64
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot.art.rel  ./fwlib/arm64
sshpass -p "admin" scp  ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk/arm64/boot.oat  ./fwlib/arm64

adb root
adb remount

adb push ./fwlib/framework.jar system/framework
adb push ./fwlib/boot-framework.vdex system/framework
adb push ./fwlib/arm/boot-framework.art system/framework/arm
adb push ./fwlib/arm/boot-framework.art.rel system/framework/arm
adb push ./fwlib/arm/boot-framework.oat system/framework/arm
adb push ./fwlib/arm/boot.art system/framework/arm
adb push ./fwlib/arm/boot.art.rel system/framework/arm
adb push ./fwlib/arm/boot.oat system/framework/arm

adb push ./fwlib/arm64/boot-framework.art system/framework/arm64
adb push ./fwlib/arm64/boot-framework.art.rel system/framework/arm64
adb push ./fwlib/arm64/boot-framework.oat system/framework/arm64
adb push ./fwlib/arm64/boot.art system/framework/arm64
adb push ./fwlib/arm64/boot.art.rel system/framework/arm64
adb push ./fwlib/arm64/boot.oat system/framework/arm64

adb shell sync
adb reboot
