#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2023/5/10 04:19
# @Author  : Tom SONG 
# @Mail    : xdmyssy@gmail.com
# @File    : plot_edep.py
# @Software: PyCharm

from read_root import ReadRoot
from matplotlib import pyplot as plt
import numpy as np

def plot_edep(file_path, ep, pid):
    data=ReadRoot(file_path=file_path, tree_name='Calib_Hit', exp=['Hit_Energy'])
    energy=data.readBranch('Hit_Energy')

    results=[np.sum(_) for _ in energy]

    plt.figure(figsize=(6,5))
    ax=plt.gca()
    plt.text(0.1, 0.9, 'CEPC Test Beam', fontsize=15, fontstyle='oblique', fontweight='bold',
             horizontalalignment='left',
             verticalalignment='center', transform=ax.transAxes, )
    plt.text(0.1, 0.8, '{} E_Dep @ {}GeV'.format(pid, ep), fontsize=12, fontstyle='normal',
             horizontalalignment='left',
             verticalalignment='center', transform=ax.transAxes, )
    plt.hist(results, linewidth=3, histtype='step', color='black', bins=200, log=True)
    plt.xlabel('[MeV]')
    plt.savefig('/mnt2/SJTU/Song/e_dep.png')
    plt.show()




if __name__ == '__main__':
    ep=350
    pid='Pi-'
    file_path='/home/songsy/CEPC_2023TB/ahcal_ana/data/Ahcal_2023/pi-/350GeV/AHCAL_Run368_20230510_052942.root'
    plot_edep(file_path=file_path, ep=ep,pid=pid)

    pass
