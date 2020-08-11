#!/bin/bash

src_files=`find ../srcs -name "*.c"`

if [ ! -d ./temp ]
then
	echo "creating temp dir"
	mkdir ./temp
else
	echo "removing old tests"
	rm -rf ./temp/*
fi

for f in $src_files
do
	dir=`dirname "$f" | cut -c 4-`
	file=`basename "$f"`
	echo "compiling test_$file"
	clang -o ./temp/test_`basename $f .c` $f ./$dir/test_$file -I ../includes -L .. -lft -lm

done
