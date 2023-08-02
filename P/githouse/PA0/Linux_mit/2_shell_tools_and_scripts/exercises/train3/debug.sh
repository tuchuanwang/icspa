##########################################################################
# File Name: debug.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年07月01日 星期六 16时56分48秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

#:<<EOF
echo > out.log

for ((count=0;;count++))
do
	./bugtest.sh &>> out.log
	if [[ $? -ne 0 ]]; then	# $?:上一个指令的返回值
		echo "failed after ${count} times"
		break

	fi
done
#EOF

:<<EOF
 echo > out.log
 for ((count=0;;count++))
	  do
		       ./bugtest.sh &>> out.log
			        if [[ $? -ne 0 ]]; then
						         echo "failed after $count times"
								          break

										       fi
											    done
EOF
