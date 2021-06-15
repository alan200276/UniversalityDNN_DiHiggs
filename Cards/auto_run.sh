#!/bin/bash

cardpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Cards"

outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out"

mcdatapath="/home/u5"


# UFO resource: https://feynrules.irmp.ucl.ac.be/wiki/2HDM
#cd /root/MG5_aMC_v2_7_3/models
#wget https://feynrules.irmp.ucl.ac.be/raw-attachment/wiki/2HDM/2HDMtII_NLO.tar.gz
#tar -xvf 2HDMtII_NLO.tar.gz


echo "Start Running"

i=2
while [ $i != 11 ]
do
   echo i=$i

   date +"%Y %b %m"
   date +"%r"
   
#    echo "PP H hh"
#    python /root/MG5_aMC_v2_7_3/bin/mg5_aMC $cardpath/ppHhh.txt > $outpath/ppHhh_"$i".log 
   
   
#    echo "PP bbbb"
#    python /root/MG5_aMC_v2_7_3/bin/mg5_aMC $cardpath/ppbbbb.txt > $outpath/ppbbbb_"$i".log
   
   
   echo "PP bbbb"
   python /root/MG5_aMC_v2_7_3/bin/mg5_aMC $cardpath/proc_ppbbbb.txt > $outpath/proc_ppbbbb_"$i".log

#    echo "PP H/A hh"
#    python /root/MG5_aMC_v2_7_3/bin/mg5_aMC $cardpath/proc_ppHhh.txt > $outpath/proc_ppHhh_"$i".log 
   
   
   
   

   date +"%Y %b %m"
   date +"%r"
   i=$(($i+1))

done

gzip -d $mcdatapath/proc_*/Events/run_*/unweighted_events.lhe.gz


echo "Finish"

date
