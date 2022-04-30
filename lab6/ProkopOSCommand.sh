#! /bin/bash

# Input
echo 'Input directory name to delete it:'
read dirname

# Validation
if [[ ! -d "$dirname" ]]; then
    echo 'No such directory'
    exit 1
fi
echo 'Directory found'

if [[ "$dirname" =~ ^.{0,16}$ || ! "$dirname" =~ [0-9]{7,} ]]; then
    echo 'Invalid directory name: should be at least 17 characters with at least 7 integers in a row'
    exit 1
fi

# Processing
rmdir "$dirname"
echo 'Directory removed'
