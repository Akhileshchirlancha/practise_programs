#!/bin/bash

if [ $# == 0 ]
then
    echo "venu"
    echo "mahesh"
    echo "kiran"
fi

while [ $# -gt 0 ]
do
     
    case "$1" in
        -v) echo "venu" ;;
        -m) echo "mahesh" ;;
        -k) echo "kiran" ;;
         *) break ;;
    esac
    shift

done
