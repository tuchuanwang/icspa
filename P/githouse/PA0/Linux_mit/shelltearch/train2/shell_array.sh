##########################################################################
# File Name: shell_array.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年06月30日 星期五 16时16分05秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

#bash支持一维数组 数组下标由0开始编写
#定义格式 数组名=(值1 值2 ... 值n)

#定义一个数组
array_name=(1 3 54 23 54 23)

#读取数组   ${数组名[下标]}
echo ${array_name[2]} #输出54

#获取数组长度 与获取字符串长度相同
length=${#array_name[@]}  #元素个数
lengthn=${#array_name[2]} #数组单个元素的长度


echo ${length}
echo ${lengthn}

#shell 中的注释
#********************
#
# 这是一个注释
#
#-*****************

#多行注释
:<<EOF
haha
aha
这是注释
EOF

:<<!
还可以使用
其他符号 ! '' 等
!

