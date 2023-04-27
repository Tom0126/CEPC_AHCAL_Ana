#!/bin/bash

file_name=20230425_212850 # change this name

source ./temp_conv_to_root/root_setup.sh
path="$PWD"
DIR_IN=/mnt2/BeamData/2023/AHCAL/temp
DIR_OUT=$path/temp_conv_to_root/bt_result
./temp_conv_to_root/main ${DIR_IN}/${file_name}.dat ${DIR_OUT} ${DIR_OUT}/${file_name}.root

source /mnt2/SJTU/Song/conda_setup/conda_cepc_tb_setup.sh
python ana.py --file_name $file_name
