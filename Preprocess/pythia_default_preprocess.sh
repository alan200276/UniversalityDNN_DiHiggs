#/bin/bash

PROCESS="Pythia_default"
HOMEPATH="/home/alan/ML_Analysis/Universality_DNN_DiHiggs"
datapath="/home/u5/Universality_DiHiggs/"$PROCESS
outpath_H="Out/"$PROCESS"_H"
outpath_QCD="Out/"$PROCESS"_QCD"
process="pythia_def"

date

echo "Start Running"


date +"%Y %b %m"


i=1
while [ $i != 11 ]
do 

    nohup python3 $HOMEPATH/Preprocess/preprocess_dev.py $datapath/EventList_H_pythia_def_"$i".h5 0 $i > $HOMEPATH/$outpath_H/preprocess_ppHhh_"$process"_"$i".log  &
    
    nohup python3 $HOMEPATH/Preprocess/preprocess_dev.py $datapath/EventList_QCD_pythia_def_"$i".h5 0 $i > $HOMEPATH/$outpath_QCD/preprocess_ppbbbb_"$process"_"$i".log  &
    

    date +"%Y %b %m"
    date +"%r"
    i=$(($i+1))

done



echo "Finish"

date
