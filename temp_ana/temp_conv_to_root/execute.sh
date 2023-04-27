#！/bin/sh
path="$PWD"
DIR_IN=/mnt2/BeamData/2023/AHCAL/temp
datafile=20230425_212850
DIR_OUT=$path/bt_result
./main ${DIR_IN}/${datafile}.dat ${DIR_OUT} ${DIR_OUT}/${datafile}.root
#./main ${DIR_IN}/${datafile}.dat  ${DIR_OUT}/${datafile}.root
