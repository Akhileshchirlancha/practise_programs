#!/bin/bash

while getopts a:n: opt;
do
    case $opt in
	a) AGE="$OPTARG"  ;;
	n) NAME="$OPTARG"  ;;
	*) echo "Invalid option:" 
            exit 1 
            ;;
    esac
done

echo  "name: $NAME"
echo  "age: $AGE"
