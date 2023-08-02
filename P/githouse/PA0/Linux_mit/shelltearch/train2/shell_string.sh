##########################################################################
# File Name: shell_string.sh
# Author: WangZhen
# mail: 1240306894@qq.com
# Created Time: 2023年06月30日 星期五 15时43分13秒
#########################################################################
#!/usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

#Shell字符串
# 可以使用单引号，双引号。

#单引号的限制：
#1，单引号里的任何字符都会原样输出，单引号字符串中的变量是无效的；
#2，单引号字符串中不能出现单独一个的单引号（使用转义符的也不可以），但可以成对出现，作为字符串拼接使用。

your_name="wangtuchuan"
echo "单引号效果："
str='hello, i am $your_name '
echo $str

#双引号的优点：
#1,双引号里可以有变量
#2,双引号里面可以出现转义字符

echo "双引号效果："
str="hello, i am $your_name"
echo $str

#拼接字符串
your_name="runoob"
#使用双引号拼接
greeting="hello,"$your_name"!"
greeting_1="hello,${your_name}!"
echo $greeting $greeting_1

#使用单引号拼接
greeting_2='hello,'$your_name'!'
greeting_3='hello,${your_name}！'
echo $greeting_2 $greeting_3

#获取字符串长度
string='abcd'
echo ${#string} #输出 4

#提取子字符串
string="runoob is a great site"
echo ${string:1:4} #输出 unoo

#查找子字符串	查找字符i和o的位置
string="runoob is a great site"
echo `expr index "$string" io` # 输出4
