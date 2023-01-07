#!/bin/bash

for file in *.c; do
	gcc -c "$file"
	arr -rcs libmy.a "${file%.c}.o"
done \

