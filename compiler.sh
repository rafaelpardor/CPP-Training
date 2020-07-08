#!/bin/bash

arg1=$1
arg2="compiled_file"

g++ $arg1 -o $arg2 && ./$arg2 && rm -f $arg2
