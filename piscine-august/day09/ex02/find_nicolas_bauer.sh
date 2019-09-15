cat contacts_hard.txt | grep -i 'bauer' | grep -i 'nicolas' | grep -iv "bomber" | wc -l | sed 's/ //g'
