##########################################################################
# File Name: ls.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年06月30日 星期五 11时06分09秒
#########################################################################
#!/bin/zsh
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

#显示所有文件（包括隐藏文件）
ls -al

#文件打印以人类可一理解的格式输出 -h
ls -hl

#文件以最近访问顺序输出 -t
ls -lt

#以彩色文本输出
ls --color=auto
ls --color=never
