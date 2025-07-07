#!/bin/bash

for file in *.sh; do

  mv "$file" "${file%.sh}"

done
