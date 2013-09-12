Kernel Unit Test
================

Example of using unity c unit test framework in linux kernel

This is an example of how to make unit test with function inside linux.
1. make a kernel module with unity framework
2. insmod testmodule.ko
3. unit test run automatically when module is loaded.

To build kernel module, you need to have a linux kernel source, and build it.
In Makefile, change the KERNEL_DIR to your linux kernel directory.
  KERNELDIR = /home/daniel.kang/androvm/kernel_goldfish

I used crc16 function in lib/crc16.c for example.
Please find a good kernel unit test example for me.


What is changed in unity
========================

1. The version of unity used is from "Test-Driven Development for Embedded C".
2. remove float assertion.
3. malloc/free is replaced with kmalloc/kfree
4. UNITY_OUTPUT_CHAR


Thanks
======
Thanks to James Grenning for lettting me get interest of C unit test.
Thanks to Mikhail Gruzdev for sharing me the idea how unit-test can be used.

