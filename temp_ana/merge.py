import numpy as np

from ReadRoot import readRootFileTemperature


def combine(file_lists):
    '''combine the  results of the test'''
    length = len(file_lists)
    assert length > 0
    temps, times = readRootFileTemperature(file_lists[0])
    index = 1
    while index < length:
        temp_i, time_i = readRootFileTemperature((file_lists[index]))
        temps = np.concatenate([temps, temp_i[5:]])
        times = np.concatenate([times, time_i[5:]])
        index += 1
    return temps, times


if __name__ == '__main__':
    pass
