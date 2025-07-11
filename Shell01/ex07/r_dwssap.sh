#!/bin/bash

cat /etc/passwd \
| grep -v '^#' \
| sed -n '2~2p' \
| cut -d: -f1 \
| rev \
| sort -r \
| awk -v line1="$FT_LINE1" -v line2="$FT_LINE2" '$0 >= line1 && $0 <= line2' \
| paste -sd ', ' - \
| sed 's/$/./'

