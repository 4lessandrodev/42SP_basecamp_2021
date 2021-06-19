#!/bin/bash
find ../../avaliacao -type f \( -name "main.c" -o -name "a.out" \) -print -delete 

#Delete all .git from repository 
#find . -type d -name ".git" | xargs rm -rf