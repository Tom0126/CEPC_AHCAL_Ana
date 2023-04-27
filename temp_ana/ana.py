from ReadRoot import *
import numpy as np
import pandas as pd
from plotfun import *
from processData import *
import argparse

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    # base setting
    parser.add_argument("--file_name", type=str, help="file name to plot.")
    args = parser.parse_args()
    # TODO =========================== change ================
    temperature_file='./temp_conv_to_root/bt_result/{}.root'.format(args.file_name)
    coordination= 'position.txt'
    # start_time=temperature_file[-20:-5]
    room_temp=0

    #######################################################

    # read results
    temps, times =readRootFileTemperature(temperature_file) # temps [, 40, 48 ]
    temps=temps-room_temp
    # print(times)
    num_entry=len(temps)
    assert num_entry == len(times)

    # read the coorinate
    coor=np.loadtxt('position.txt')

    # text=str(getTimeTicks(times[-1:-2:-1])[0])+'\n'+temperature_file[temperature_file.find('2'):]
    # text=''
    # plotLayerTempAverageStd('AverageStd.png',temps[-1],text,room_temp=room_temp)
    # plotLayerTempMinMax('MinMax.png',temps[-1],'Time: {}*60 s'.format(num_entry-1),start_time)

    # text='Beginning Date:' +'\n'+temperature_file[temperature_file.find('2'):]
    text=''
    plotTempTimeAverage('AverageTempvsTime.png',times,temps,'Average Temperature vs Time ',text,gap=int(num_entry/20),
                        room_temp=room_temp)
    # plotTempTimePoint('PointTime.png',times,temps[:,1,0],'Point: ({},{}) vs Time'.format(coor[0,0],coor[0,1]),start_time)
    # for i in range(len(coor)):
    #     plotTempTimePoint('pointtime/PointTime{}.png'.format(i), times, temps[:, 1, i],
    #                       'Point: ({},{}) vs Time'.format(coor[i, 0], coor[i, 1]),
    #                       start_time)
    #     plotTempTimePoint('pointtime/PointTime_1_{}.png'.format(i), times, temps[:, 0, i],
    #                       'Point: ({},{}) vs Time'.format(coor[i, 0], coor[i, 1]),
    #                       start_time)
    #     plotTempTimePoint('pointtime/PointTime_6_{}.png'.format(i), times, temps[:, 5, i],
    #                                         'Point: ({},{}) vs Time'.format(coor[i, 0], coor[i, 1]),
    #                                         start_time)
    # title='Layer 2'+'\n'+start_time+' - '+str(getTimeTicks(times[-1:-2:-1])[0])
    # plotTempCoor('TempCoor{}.png'.format(2),coor,temps[-1,1,:],title)
    #
    # title='Layer 3'+'\n'+start_time+' - '+str(getTimeTicks(times[-1:-2:-1])[0])
    # plotTempCoor('TempCoor{}.png'.format(3),coor,temps[-1,2,:],title)
    #
    # title='Layer 36'+'\n'+start_time+' - '+str(getTimeTicks(times[-1:-2:-1])[0])
    # plotTempCoor('TempCoor{}.png'.format(5),coor,temps[-1,4,:],title)
    #
    # title='Layer 9'+'\n'+start_time+' - '+str(getTimeTicks(times[-1:-2:-1])[0])
    # plotTempCoor('TempCoor{}.png'.format(9),coor,temps[-1,8,:],title)
