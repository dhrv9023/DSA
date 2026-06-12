#!/bin/bash

cd ~/DSA

git add .
git commit -m "DSA Daily Update $(date '+%Y-%m-%d %H:%M:%S')"
git push origin master

echo "GitHub streak updated!"