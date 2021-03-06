#/bin/bash

PROCESS="Pythia_vincia"
HOMEPATH="/home/alan/ML_Analysis/Universality_DNN_DiHiggs"
datapath="/home/u5/Universality_DiHiggs/"$PROCESS
outpath_H="Out/"$PROCESS"_H"
outpath_QCD="Out/"$PROCESS"_QCD"
process="pythia_vin"

date

echo "Start Running"


date +"%Y %b %m"


i=1
while [ $i != 11 ]
do 

    echo "H $PROCESS"
    nohup python3 $HOMEPATH/Preprocess/downsize.py $datapath/ppHhh_"$process"_"$i".root $i "$datapath" > $HOMEPATH/$outpath_H/downsize_ppHhh_"$process"_"$i".log &
    
#     echo "QCD $PROCESS"
#     nohup python3 $HOMEPATH/Preprocess/downsize.py $datapath/ppbbbb_"$process"_"$i".root $i $datapath > $HOMEPATH/$outpath_QCD/downsize_ppbbbb_"$process"_"$i".log &


    date +"%Y %b %m"
    date +"%r"
    i=$(($i+1))

done



echo "Finish"

date
