import os.path

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from processData import *


def plotTempCoor(fig_name, coor, data, title):
    plt.figure()
    data_coor = np.c_[coor, data]
    df = pd.DataFrame(data_coor, columns=['x', 'y', 'Temperature'])
    plt.figure(figsize=(10, 8))
    # plt.title(title, fontsize=18)
    ax = df.plot.scatter(x='x',
                         y='y',
                         c='Temperature',
                         colormap='viridis')

    for row in data_coor:
        f = row[2]
        text = ax.text(row[0], row[1], float('%.2f' % f),
                       ha="center", va="top", color="black", fontsize=10)
    plt.title(title, fontsize=10)
    plt.savefig('figure/' + fig_name)
    plt.close()


def plotLayerTempAverageStd(fig_name, data, text,room_temp=0):
    plt.figure()
    layers = np.arange(1, 41)
    stds = getStdZeroRemoved(data)
    averages = getAverageZeroRemoved(data)
    plt.figure(figsize=(15, 12))
    plt.text(x=1, y=np.max(averages)+2, s=text, fontsize=30)
    # plt.title(title, fontsize=18)
    plt.ylabel('Temperature Increment/ ' + '$^{o}C$', fontsize=25)
    plt.xlabel('Layer', fontsize=30)
    plt.plot(layers, averages, label='Average', linestyle='None', marker='.')
    plt.errorbar(layers, averages, stds, linestyle='None', capsize=4, label='Std')
    plt.legend(loc='upper right', fontsize=15, frameon=False)
    x_ticks=[5*i for i in range(1,9)]

    x_ticks.insert(0,1)
    plt.xticks(x_ticks, fontsize=20)
    # plt.yticks(np.arange(21.3,50,1)-room_temp,fontsize=15)
    # plt.ylim(0,14)
    # plt.grid(axis='x')
    plt.savefig('figure/' + fig_name)
    plt.close()

def plotLayerTempMinMax(fig_name, data, title, start_time):
    plt.figure()
    layers = np.arange(1, 41)
    mins = getMinZeroRemoved(data)
    maxs = getMaxZeroRemoved(data)
    plt.figure(figsize=(15, 8))
    plt.title(title, fontsize=18)
    plt.text(x=1, y=15, s='Date: ' + start_time, fontsize=18)
    plt.ylabel('Temperature/ ' + '$^{o}C$', fontsize=18)
    plt.xlabel('Layer', fontsize=18)
    plt.fill_between(layers, mins, maxs, alpha=0.5, label='Temperature range', )
    plt.legend(loc='lower left', fontsize=15, frameon=False)
    plt.xticks([i for i in range(1, 41)], fontsize=15, rotation=-45)
    plt.yticks(fontsize=15)
    plt.savefig('figure/' + fig_name)
    plt.close()

def plotTempTimeAverage(fig_name, time, data, title, text,gap=100,room_temp=0):
    len_x0=len(time)

    plt.figure()
    plt.style.use('classic')
    averages = np.mean(data, axis=(1, 2))
    plt.figure(figsize=(15, 12))
    plt.title(title, fontsize=30)
    plt.text(x=2, y=averages[0]+1, s=text, fontsize=25)
    plt.ylabel('Temperature Increment/ ' + '$^{o}C$', fontsize=25)
    plt.xlabel('Time', fontsize=30)
    plt.plot(np.arange(len_x0), averages,linewidth=5)
    time2 = time[:: gap]
    lex_x1 = len(time2)
    x_ticks = np.arange(0, lex_x1 * gap, gap)
    # to ensure that the last one could be included
    if ((len_x0-1)%gap)!=0:
        time2=np.concatenate((time2,np.array([time[-1]])))
        x_ticks=np.concatenate((x_ticks,np.array([len_x0-1])))
    plt.xticks(x_ticks, getTimeTicks(time2), rotation=-20,fontsize=20)
    plt.yticks(np.linspace(0.9*(np.amin(averages-room_temp)), 1.1*(np.amax(averages-room_temp)),10),fontsize=20)

    if not os.path.exists('figure'):
        os.mkdir('figure')

    plt.savefig('figure/' + fig_name)
    plt.close()

def plotTempTimePoint(fig_name, time, data, title, start_time, gap=30):
    len_x0 = len(time)

    plt.figure()
    ''' temp of a point vs time'''
    plt.style.use('classic')
    plt.figure(figsize=(10, 8))
    plt.text(x=0, y=33, s='Start Date: ' + start_time, fontsize=18)
    plt.title(title, fontsize=18)
    plt.ylabel('Temperature/ ' + '$^{o}C$', fontsize=18)
    plt.xlabel('Time', fontsize=18)
    plt.plot(np.arange(len_x0), data, linewidth=3)
    time2 = time[:: gap]
    lex_x1 = len(time2)
    x_ticks = np.arange(0, lex_x1 * gap, gap)
    # to ensure that the last one could be included
    if ((len_x0 - 1) % gap) != 0:
        time2 = np.concatenate((time2, np.array([time[-1]])))
        x_ticks = np.concatenate((x_ticks, np.array([len_x0 - 1])))
    plt.xticks(x_ticks, getTimeTicks(time2), rotation=-45)
    # plt.yticks(np.arange(25, 38, 2))
    plt.grid(alpha=0.5)
    plt.savefig('figure/' + fig_name)
    plt.close()