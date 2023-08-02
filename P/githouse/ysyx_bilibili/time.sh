##########################################################################
# File Name: time.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年07月17日 星期一 21时16分48秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

watch -t -n 1 "echo -n '一生一芯 | 预学习P线 | '; date; cat /proc/cpuinfo | grep MHz | awk '{print \$1 NR \$3 \$4 \$2}'"
#watch -n 1 "cat /proc/cpuinfo | grep MHz | awk '{print \$1 NR \$3 \$4 \$2}' "
#bash ./cpu.sh
