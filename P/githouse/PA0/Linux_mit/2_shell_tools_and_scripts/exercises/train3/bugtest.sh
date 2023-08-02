##########################################################################
# File Name: test.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年07月01日 星期六 16时43分47秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

#:<< EOF
n=$(( RANDOM % 100 ))

if [[ n -eq 42 ]]; then
	echo "Something went wrong"
	>$2 "The erroe was using magic numbers"
	exit 1
fi

echo "Everything went acconding to plan"
#EOF

:<<EOF
n=$(( RANDOM % 100 ))

 if [[ n -eq 42 ]]; then
	      echo "Something went wrong"
		       >&2 echo "The error was using magic numbers"
			        exit 1
					 fi

					  echo "Everything went according to plan"
EOF
