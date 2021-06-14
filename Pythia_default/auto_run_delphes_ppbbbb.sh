#!/bin/bash

echo "Start Running"

outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out/Pythia_default_QCD"
hepmcpath="/home/u5/Universality_DiHiggs/Pythia_default"
savepath="/home/u5/Universality_DiHiggs/Pythia_default"
rootfilename="ppbbbb_pythia_def"
hepmcfilename="ppbbbb_pythia_def"


i=2

while [ $i != 11 ]
do

       date +"%Y %b %m"
       date +"%r"
       echo "PPJJ"
       
#        cd /root/MG5_aMC_v2_7_2/Delphes
       cd /root/Delphes-3.4.2
       
        nohup ./DelphesHepMC /home/alan/ML_Analysis/Universality_DNN_DiHiggs/Cards/delphes_card_HLLHC.tcl $savepath/"$rootfilename"_$i.root $hepmcpath/"$hepmcfilename"_$i.hepmc > $outpath/"$rootfilename"_"$i"_log.txt &
        
    
       date +"%Y %b %m"
       date +"%r"

   
#    date +"%Y %b %m"
#    date +"%r"
   i=$(($i+1))

done

echo "Finish"

date
