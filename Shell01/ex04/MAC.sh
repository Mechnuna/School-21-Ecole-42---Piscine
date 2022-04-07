ifconfig -a | awk '$1 == "ether" {print $2}'
