##########################################################################
# File Name: getlog.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年07月22日 星期六 17时11分55秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

for i in {0..9}; do
	journalctl -b-$i | grep "Startup finished in"
done
