#!/bin/sh

count=0

prefix_filename=３－２－１_
file_extension=.jpg

for file in `\find . -maxdepth 1 -name '*.jpg' -type f`; do
    #元ファイルのバックアップ
    cp $file $file.bak
    oFilename="$prefix_filename`printf "%03d" $count`$file_extension"
    #リネーム
    ./test.exe $file $oFilename

    count=`expr $count + 1`
done