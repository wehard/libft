#!/bin/bash

src_files=`find ../srcs -name "*.c"`

#echo $src_files

for f in $src_files # ../srcs/**/*.c
do
	dir=`dirname "$f" | cut -c 4-`
	file=`basename "$f"`
	if [ ! -d "$dir" ]
	then
		echo "creating $dir"
		mkdir -p $dir
	fi
	if [ ! -f $dir/test_$file ]
	then
		fp=`basename $f .c`
		prototype=$(cat $f | grep "$fp" | sed -n 2p)
		#echo "$prototype"
		#echo "creating $dir/test_$file"
		`echo $prototype >> $dir/test_$file`
	fi
done
