cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | rev | grep -o '[^:]*$' | sort -r | awk -v line_one="$FT_LINE1" -v line_two="$FT_LINE2" 'NR==line_one,NR==line_two'
