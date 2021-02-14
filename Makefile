obj-m := hello.o

SOURCE_DIR=/lib/modules/$(shell uname -r)/build

default:
	make -C $(SOURCE_DIR) M=$(shell pwd) modules

clean:
	rm -f *.o *.ko *.mod.c *.symvers *.order






















