from ReadRoot import *
import numpy as np
import pandas as pd
from plotfun import *
from processData import *
from merge import combine

temperature_file_1 = '/home/songsy/CEPC_2023TB/temp_tb_result/20230424_151427.root'
temperature_file_2 = '/home/songsy/CEPC_2023TB/temp_ana/temp_conv_to_root/bt_result/20230425_163512.root'
temperature_file_3 = '/home/songsy/CEPC_2023TB/temp_tb_result/20230425_212850.root'
temperature_file_4 = '/home/songsy/CEPC_2023TB/temp_ana/temp_conv_to_root/bt_result/20230427_235657.root'
temperature_file_5 = '/home/songsy/CEPC_2023TB/temp_ana/temp_conv_to_root/bt_result/20230428_215649.root'
temperature_file_6 = '/home/songsy/CEPC_2023TB/temp_ana/temp_conv_to_root/bt_result/20230429_145247.root'

temperature_file_lists = [
    temperature_file_1, temperature_file_2, temperature_file_3,
    temperature_file_4, temperature_file_5, temperature_file_6,
]

for i in range(len(temperature_file_lists)):
    t, tm = readRootFileTemperature(temperature_file_lists[i])
    tm = getTimeTicks(tm)
    start_time = tm[0]
    end_time = tm[-1]
    print('file_', i + 1, 's: ', start_time, '  ', 'e: ', end_time)

# read the coorinate
coordination = 'position.txt'
coor = np.loadtxt(coordination)

room_temp = 0

temps, times = combine(temperature_file_lists)
ticks=getTimeTicks(times)
# print(ticks)

# avg=np.mean(temps,axis=(1,2))
# time_temp=np.hstack((times.reshape((-1,1)),avg.reshape((-1,1))))
# print(time_temp.shape)

# avg_layer=np.mean(temps,axis=(2))
# print(avg_layer.shape)
# np.savetxt('temp.txt',avg_layer)
# np.savetxt('time.txt',times)

temps = temps - room_temp
num_entry=len(temps)
#######################################################
# chip0_temp=temps[:,0,0]
# plt.plot(getTimeTicks(times),chip0_temp)
# plt.xticks([])
# plt.xlabel('time')
# plt.show()
# print(temps.shape)

# text='Beginning Date:' +'\n'+temperature_file[temperature_file.find('2'):]
text=''
plotTempTimeAverage('AverageTempvsTime_combine.png',times,temps,'Average Temperature vs Time ',text,gap=int(num_entry/10),
                    room_temp=room_temp)
# plotTempTimeAverage('AverageTempvsTime.png', times, temps, 'AHCAL Average Temperature vs Time ', '', gap=1100,
#                     room_temp=room_temp)
