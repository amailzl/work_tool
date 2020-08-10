ehco "make sure framework is already signed"
rm -rf ./signapk/*

sshpass -p "admin" scp -r ws@10.2.32.46:/raid/work/yueqiao.liu/ASE-3/android15.1_2/mysign/signapk  .
adb root
adb remount

adb push ./signapk/framework.jar system/framework
adb push ./signapk/boot-framework.vdex system/framework
adb push ./signapk/arm/boot-framework.art system/framework/arm
adb push ./signapk/arm/boot-framework.art.rel system/framework/arm
adb push ./signapk/arm/boot-framework.oat system/framework/arm
adb push ./signapk/arm/boot.art system/framework/arm
adb push ./signapk/arm/boot.art.rel system/framework/arm
adb push ./signapk/arm/boot.oat system/framework/arm

adb push ./signapk/arm64/boot-framework.art system/framework/arm64
adb push ./signapk/arm64/boot-framework.art.rel system/framework/arm64
adb push ./signapk/arm64/boot-framework.oat system/framework/arm64
adb push ./signapk/arm64/boot.art system/framework/arm64
adb push ./signapk/arm64/boot.art.rel system/framework/arm64
adb push ./signapk/arm64/boot.oat system/framework/arm64

adb shell sync
adb reboot
