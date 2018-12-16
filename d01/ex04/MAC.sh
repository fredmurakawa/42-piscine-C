ifconfig -a link| grep "ether"| sed "s/ether//"| awk '{print $1}'
