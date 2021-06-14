#!/bin/bash

pythiapath="/root/pythia8303/examples"
pythiacmndpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Pythia_vincia"
mcdatapath="/home/u5/Universality_DiHiggs"
outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out/Pythia_vincia_H"


echo "Start Running"
date


i=2
while [ $i != 11 ]
do
    rand=$RANDOM
    
    echo "i= $i"
    
    echo "Random Seed =  $rand "    
    
    
    if [ "$i" == "2" ];then
        
        sed -i -e "s/randomseed/"$rand"/g" $pythiacmndpath/ppHhh.cmnd 
    
    elif [ "$i" != "2" ];then

        sed -i -e "s/"$rand_tmp"/"$rand"/g" $pythiacmndpath/ppHhh.cmnd 
        
    fi
    
    cd $pythiapath
    nohup ./main42 $pythiacmndpath/ppHhh.cmnd $mcdatapath/Pythia_vincia/ppHhh_pythia_vin_"$i".hepmc > $outpath/ppHhh_"$i".log &
    
     sleep 5
    
   date +"%Y %b %m"
   date +"%r"
   i=$(($i+1))
   
#    echo "i=$i"
   
   if [ "$i" -lt "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_0"$(($i))"/g" $pythiacmndpath/ppHhh.cmnd  
#         echo "i<10 $i"
       
    elif [ "$i" -eq "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_"$(($i))"/g" $pythiacmndpath/ppHhh.cmnd 
#          echo "i==10 $i"

    elif [ "$i" -gt "10" ];then

       sed -i -e "s/run_"$(($i-1))"/run_"$(($i))"/g" $pythiacmndpath/ppHhh.cmnd 
#          echo "i>10 $i"

    fi

    rand_tmp=$rand

done



if [ "$i" -lt "10" ];then

   sed -i -e "s/run_0"$(($i))"/run_01/g" $pythiacmndpath/ppHhh.cmnd  
#         echo "i<10 $i"

elif [ "$i" -eq "10" ];then

   sed -i -e "s/run_"$(($i))"/run_01/g" $pythiacmndpath/ppHhh.cmnd 
#          echo "i==10 $i"

elif [ "$i" -gt "10" ];then

   sed -i -e "s/run_"$(($i))"/run_01/g" $pythiacmndpath/ppHhh.cmnd 
#          echo "i>10 $i"

fi
# sed -i -e "s/run_"$(($i))"/run_01/g" $pythiacmndpath/ppwz.cmnd  
sed -i -e "s/"$rand"/randomseed/g" $pythiacmndpath/ppHhh.cmnd 

echo "Finish"

date