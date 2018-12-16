cat $1 | grep -i "bauer" | grep -i "nicolas" | awk -F' ' '{print $4}' | grep '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}' | tr -d "()-"
