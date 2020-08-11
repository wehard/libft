#!/bin/bash

src_files=`find ../srcs -name "*.c"`
includes=`ls ../includes`

for f in $src_files
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
		prototype=$(cat $f | grep "$fp(" | grep -v "#include" | grep -v "//*")
		echo "creating $dir/test_$file"
		sed -e "s;%FUNC_PROTOTYPE%;$prototype\;;g" test_template.c > $dir/test_$file
	fi
done

# sed 's/'"$old_run"'/'"$new_run"'/'
# -e "s;%INCLUDES%;$includes/;g"
echo $includes
