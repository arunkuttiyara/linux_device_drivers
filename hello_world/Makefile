obj-m = helloworld.o


KVERSION = $(shell uname -r)
KDIR  = /usr/src/linux-headers-$(KVERSION)/
#KDIR = ../../kernel_build/linux-4.0.4

all:
	make -C $(KDIR) M=`pwd` modules
clean:
	make -C $(KDIR) M=$(PWD) clean


