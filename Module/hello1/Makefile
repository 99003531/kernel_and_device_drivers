obj-m += hello1.o
KSRC = /home/ltts/eworkspace/kernel_ws/linux-4.14.244


all:
	make –C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

clean:
	make -c ${KSRC} M=${PWD} clean ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
