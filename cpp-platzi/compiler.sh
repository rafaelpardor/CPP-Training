#!/bin/bash

arg1=$1
arg2=$2

g++ $arg1 -o $arg2 && ./$arg2 && rm -f $arg2

echo "End of bash file"

