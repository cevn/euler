#!/bin/bash 

## script to check another executable script's runtime. 
## usage : ./time.sh "yourscript" 
## result: time elapsed in ms. 

if [ $2 == 'ms' ] 
then 
    start=$(($(date +%s%N)/1000000)) # date in ms. %s is seconds, 
    ./$1
    end=$(($(date +%s%N)/1000000))
    elapsed=$(($end-$start))
    echo $elapsed milliseconds elapsed
elif [ $2 = 'ns' ]  
then
    start=$(($(date +%s%N)/1000)) # date in ms. %s is seconds, 
    ./$1
    end=$(($(date +%s%N)/1000))
    elapsed=$(($end-$start))
    echo $elapsed nanoseconds elapsed
elif [ $2 = 's' ]
then 
    start=$(($(date +%s%N)/1000000000)) # date in ms. %s is seconds, 
    ./$1
    end=$(($(date +%s%N)/1000000000))
    elapsed=$(($end-$start))
    echo $elapsed seconds elapsed
fi

