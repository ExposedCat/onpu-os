#!/bin/sh

echo 'Input CPU parameter name: '
read param
grep -m1 "$param" /proc/cpuinfo
echo 'clflush size - Bitness of processor'

echo 'Input MEMORY parameter name: '
read param
grep -m1 "$param" /proc/meminfo
echo 'VmallocTotal - Total size of vmalloc memory area'
