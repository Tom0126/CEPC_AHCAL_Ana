import uproot

def readRootFileTemperature(path):
    file = uproot.open(path)

    # get keys


    # A TTree File
    cosmic_event = file['Temperature']

    # Get data->numpy
    data = cosmic_event.arrays(library="np")

    # cellIDs
    temp = data['temperature']
    time = data['time']
    return temp, time


if __name__ == '__main__':
    readRootFileTemperature('/home/songsy/CEPC_2023TB/temp_tb_result/20230424_151427.root')