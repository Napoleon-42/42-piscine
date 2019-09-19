cat /etc/passwd | sed "/#/d" | sed -n '2,${p;n;}' | rev | cut -d: -f7 | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr -s '\n' 'A' | sed 's/A/, /g' | rev | sed 's/ ,/./' | rev | tr -d "\n"
