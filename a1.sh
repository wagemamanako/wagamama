#!/bin/bash
##author aa
##des for test

file_name=`ls -lth *`
for i in $file_name;do
  echo $i
done
