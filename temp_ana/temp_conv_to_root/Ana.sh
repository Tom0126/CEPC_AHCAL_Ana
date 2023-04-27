#！/bin/sh
source ~/root_setup.sh
path="$PWD"

datafile=20211125_2122_LongTimeTemperatureTest
datalist=result/$datafile/datalist
ref_temp=result/$datafile/temp_ref.txt
outputpath=result/$datafile/
echo $datalist $ref_temp $outputpath
./main $datalist $ref_temp $outputpath
