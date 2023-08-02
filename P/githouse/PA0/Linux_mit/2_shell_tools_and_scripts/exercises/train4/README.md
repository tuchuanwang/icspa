find . -type f -name "*.html" | xargs -d '\n'  tar -cvzf html.zip

1,查找文件 find . -type f -name "*.html"
		寻找      类型为文件  名字中后缀为 .html

| 管道操作 

2,xargs 命令 有些命令不支持|管道来传递参数户，但是我们需要。此时使用函数 xargs

	-d '\n' 分割符

3,tar(tape archive) 备份文件
	
tar -cvzf html.zip 将前面找到的文件压缩为 html.zip
