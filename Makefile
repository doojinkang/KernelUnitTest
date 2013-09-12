obj-m	+= testmodule.o

testmodule-objs := \
	mymodule.o \
	unittest.o \
	unity.o \
	unity_fixture.o

ARCH=x86
KERNELDIR = /home/daniel.kang/androvm/kernel_goldfish

all:
	make -C $(KERNELDIR) SUBDIRS=$(PWD) ARCH=$(ARCH) SUBARCH=$(ARCH) modules

clean:
	make -C $(KERNELDIR) SUBDIRS=$(PWD) clean


	
