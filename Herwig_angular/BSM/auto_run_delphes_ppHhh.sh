#!/bin/bash

echo "Start Running"

outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out/Herwig_angular_H"
hepmcpath="/home/u5/Universality_DiHiggs/Herwig_angular"
savepath="/home/u5/Universality_DiHiggs/Herwig_angular"
rootfilename="ppHhh_herwig_ang"
hepmcfilename="ppHhh_angular"


i=1

while [ $i != 2 ]
do

       date +"%Y %b %m"
       date +"%r"
       echo "PPjj"
       
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
