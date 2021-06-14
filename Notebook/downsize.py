#!/bin/python3

import uproot
import pyjet
import numpy as np
import pandas as pd
import math
import matplotlib.pyplot as plt
import numpy as np
import sys, os
import importlib
import time
import re

from BranchClass import *

import Event_List 
import jet_trimming 
import JSS 


# Returns the difference in phi between phi, and phi_center
# as a float between (-PI, PI)
def dphi(phi,phi_c):

    dphi_temp = phi - phi_c
    while dphi_temp > np.pi:
        dphi_temp = dphi_temp - 2*np.pi
    while dphi_temp < -np.pi:
        dphi_temp = dphi_temp + 2*np.pi
    return (dphi_temp)


print(time.strftime("%a %b %d %H:%M:%S %Y", time.localtime()))
ticks_1 = time.time()
###################################################################################
"""
Input Check and Setting
"""
###################################################################################
print("Input Check and Setting")

try:
    data_path = str(sys.argv[1])
    
    file_number = int(sys.argv[2])
    
    MCData = uproot.open(data_path)["Delphes;1"]
    
    dot = []

    for m in re.finditer("_",data_path):
        dot.append(m.start())

    d = dot[-1] 

    findlast = []
    
    for m in re.finditer("/",data_path):
        findlast.append(m.start())

    l = findlast[-1] 


    print(d)
    print(l)

    print("File is loaded!")
    print("Generator (GEN) : {}".format(data_path[d-10:d-4]))
    print("Showering (SHO) : {}".format(data_path[d-3:d]))
    print("Process (PRO) : {}".format(data_path[l+1:dot[-3]]))
    
    
    
    if data_path[d-10:d-4] == str("pythia"):
        GEN = str("pythia")
    elif data_path[d-10:d-4] == str("sherpa"):
        GEN = str("sherpa")
    elif data_path[d-10:d-4] == str("herwig"):
        GEN = str("herwig")
        
    if data_path[d-3:d] == str("def"):
        SHO = str("def")
    elif data_path[d-3:d] == str("dip"):
        SHO = str("dip")
    elif data_path[d-3:d] == str("ang"):
        SHO = str("ang")
    elif data_path[d-3:d] == str("vin"):
        SHO = str("vin")
        
    if data_path[l+1:dot[-3]] == str("ppHhh"):
        PRO = str("H")
    elif data_path[l+1:dot[-3]] == str("ppbbbb"):
        PRO = str("QCD")
    
except:
    print("********* Please Check Input Argunment *********")
    print("********* Usage: python3 downsize.py <path-of-file>/XXXX.root file_number *********")
    sys.exit(1)
    

    
###################################################################################
"""
Read Data and Jet Clustering 
"""
###################################################################################

print("Read Data and Downsize into h5 format")
print("\n")

HOMEPATH = "/home/u5/Universality_DiHiggs/"
path =  HOMEPATH + "DownsizeData/"

eventpath = path + "EventList_" + str(PRO)+"_"+str(GEN)+"_"+str(SHO)+"_"+str(file_number)+".h5"
GenParticle = BranchGenParticles(MCData)
EventList = Event_List.Event_List(GenParticle ,path=eventpath)


print("\n")
ticks_2 = time.time()
totaltime =  ticks_2 - ticks_1
print("\033[3;33mTime Cost : {:.4f} min\033[0;m".format(totaltime/60.))