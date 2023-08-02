#! /usr/bin/bash
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

mcd ()	{
	mkdir -p "$1" #--p: 先检查文件是否存在，再创建该文件.
	cd "$1"
}

# foobar
