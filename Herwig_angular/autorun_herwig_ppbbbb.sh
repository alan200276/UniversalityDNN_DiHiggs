#!/bin/bash

outpath="/home/alan/ML_Analysis/Universality_DNN_DiHiggs/Out/Herwig_angular_QCD"
mcdatapath="/home/u5"

echo "Start Running"
date

#lhapdf install NNPDF23_nlo_as_0118

nevent=100000
# nevent=5000

i=1
while [ $i != 2 ]
do
    rand=$RANDOM
    
    echo "Random Seed =  $rand "   
    echo "i =  $i "
    
    echo "Reading"   
    
    nohup /root/Herwig_7_2_2/bin/Herwig read ./ppbbbb_angular.in > read_"$i"_out &
    
    sleep 10
    
    echo "Running"   
    
    nohup /root/Herwig_7_2_2/bin/Herwig run ./ppbbbb_angular.run -N $nevent -s $rand -d 1 > $outpath/ppbbbb_angular_"$i".log &
    
    sleep 5
    
   date +"%Y %b %m"
   date +"%r"
   i=$(($i+1))
   
   
   if [ "$i" -lt "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_0"$(($i))"/g" ./ppbbbb_angular.in  

       sed -i -e "s/ppbbbb_angular_"$(($i-1))"/ppbbbb_angular_"$(($i))"/g" ./ppbbbb_angular.in
       
    elif [ "$i" -eq "10" ];then

       sed -i -e "s/run_0"$(($i-1))"/run_"$(($i))"/g" ./ppbbbb_angular.in  

       sed -i -e "s/ppbbbb_angular_"$(($i-1))"/ppbbbb_angular_"$(($i))"/g" ./ppbbbb_angular.in

    elif [ "$i" -gt "10" ];then

       sed -i -e "s/run_"$(($i-1))"/run_"$(($i))"/g" ./ppbbbb_angular.in  

       sed -i -e "s/ppbbbb_angular_"$(($i-1))"/ppbbbb_angular_"$(($i))"/g" ./ppbbbb_angular.in
        
    fi

  

done


if [ "$i" -lt "10" ];then

    sed -i -e "s/run_0"$(($i))"/run_01/g" ./ppbbbb_angular.in 
    
elif [ "$i" -eq "10" ];then

    sed -i -e "s/run_"$(($i))"/run_01/g" ./ppbbbb_angular.in
    
elif [ "$i" -gt "10" ];then

    sed -i -e "s/run_"$(($i))"/run_01/g" ./ppbbbb_angular.in
    
fi

sed -i -e "s/ppbbbb_angular_"$(($i))"/ppbbbb_angular_1/g" ./ppbbbb_angular.in


echo "Finish"

date