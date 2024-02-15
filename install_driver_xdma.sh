#!/bin/bash


cd /home/usuario/dma_ip_drivers/XDMA/linux-kernel/xdma

sudo make uninstall 

sudo make clean all 

cd ../tools/

sudo make clean

cd /home/usuario/dma_ip_drivers/XDMA/linux-kernel/xdma

sudo make install #DEBUG=1

cd /home/usuario/dma_ip_drivers/XDMA/linux-kernel/tools

sudo make

cd /home/usuario/dma_ip_drivers/XDMA/linux-kernel/tests


sudo ./load_driver.sh $1



