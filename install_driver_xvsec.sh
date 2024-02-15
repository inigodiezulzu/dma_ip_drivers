#!/bin/bash


cd /home/usuario/dma_ip_drivers/XVSEC/linux-kernel

sudo make uninstall 

sudo make clean all 

sudo make all

sudo make install

sudo rmmod -s xvsec

sudo modprobe xvsec

lsmod | grep -i xvsec


