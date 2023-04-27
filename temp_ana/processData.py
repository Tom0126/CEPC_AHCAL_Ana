import numpy as np


def getMin(data):
    return np.min(data, axis=1)


def getMax(data):
    return np.max(data, axis=1)


def getAverage(data):
    return np.mean(data, axis=1)


def getStd(data):
    return np.std(data, axis=1)


def removeZero(data):
    results = []
    for i in data:
        result = np.array(i[i != 0])
        results.append(result)
    return results


def getAverageZeroRemoved(data):
    data = removeZero(data)
    results = []
    for i in data:
        if len(i) == 0:
            results.append(0)
        else:
            results.append(np.mean(i))
    return np.array(results)


def getStdZeroRemoved(data):
    data = removeZero(data)
    results = []
    for i in data:
        if len(i) == 0:
            results.append(0)
        else:
            results.append(np.std(i))
    return np.array(results)


def getMinZeroRemoved(data):
    data = removeZero(data)
    results = []
    for i in data:
        if len(i) == 0:
            results.append(0)
        else:
            results.append(np.min(i))
    return np.array(results)


def getMaxZeroRemoved(data):
    data = removeZero(data)
    results = []
    for i in data:
        if len(i) == 0:
            results.append(0)
        else:
            results.append(np.max(i))
    return np.array(results)


def getTimeTicks(times):
    date = times // (3600 * 24)
    hours = (times - 3600 * 24 * date) // 3600
    minutes = (times - 3600 * 24 * date - 3600 * hours) // 60
    seconds = times - 3600 * 24 * date - 3600 * hours - 60 * minutes

    assert len(date) == len(minutes)
    assert len(hours) == len(minutes)
    assert len(seconds) == len(minutes)
    ticks = []
    for i in range(len(hours)):
        tick = str(date[i])+'-'+str(hours[i]) + ':' + str(minutes[i])
        ticks.append(tick)
    return ticks


