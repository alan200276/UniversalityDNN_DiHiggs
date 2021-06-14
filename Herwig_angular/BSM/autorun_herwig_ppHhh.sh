#!/bin/bash

outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out/Herwig_angular_H"
mcdatapath="/home/u5"

echo "Start Running"
date

#lhapdf install NNPDF30_nlo_as_0118

nevent=100000
# nevent=5000

i=1
while [ $i != 2 ]
do
    rand=$RANDOM
    
    echo "Random Seed =  $rand "    
    echo "i =  $i "
    
    echo "Reading"   
    
    nohup /root/Herwig_7_2_2/bin/Herwig read ./ppHhh_angular.in > read_ppHhh_"$i"_out &
    
    sleep 10
    
    echo "Running"  
    
    nohup /root/Herwig_7_2_2/bin/Herwig run ./ppHhh_angular.run -N $nevent -s $rand -d 1 > $outpath/ppHhh_angular_"$i".log &
    
    sleep 5
    
   date +"%Y %b %m"
   date +"%r"
   i=$(($i+1))
   
   
   if [ "$i" -lt "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_0"$(($i))"/g" ./ppHhh_angular.in  

       sed -i -e "s/ppHhh_angular_"$(($i-1))"/ppHhh_angular_"$(($i))"/g" ./ppHhh_angular.in
       
    elif [ "$i" -eq "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_"$(($i))"/g" ./ppHhh_angular.in  

       sed -i -e "s/ppHhh_angular_"$(($i-1))"/ppHhh_angular_"$(($i))"/g" ./ppHhh_angular.in

    elif [ "$i" -gt "10" ];then

       sed -i -e "s/run_"$(($i-1))"/run_"$(($i))"/g" ./ppHhh_angular.in  

       sed -i -e "s/ppHhh_angular_"$(($i-1))"/ppHhh_angular_"$(($i))"/g" ./ppHhh_angular.in
        
    fi

  

done

if [ "$i" -lt "10" ];then

    sed -i -e "s/run_0"$(($i))"/run_01/g" ./ppHhh_angular.in 
    
elif [ "$i" -eq "10" ];then

    sed -i -e "s/run_"$(($i))"/run_01/g" ./ppHhh_angular.in
    
elif [ "$i" -gt "10" ];then

    sed -i -e "s/run_"$(($i))"/run_01/g" ./ppHhh_angular.in
    
fi

sed -i -e "s/ppHhh_angular_"$(($i))"/ppHhh_angular_1/g" ./ppHhh_angular.in


echo "Finish"



date