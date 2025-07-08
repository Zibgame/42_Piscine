#awk 'NR == 0 || NR % 2 == 0' test.txt

ls -l | awk 'NR == 0 || NR % 2 == 1'