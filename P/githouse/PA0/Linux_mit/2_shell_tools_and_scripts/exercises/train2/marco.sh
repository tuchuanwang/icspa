#! /usr/bin/bash

export HOME1

HOME1=/home/wang/githouse/PA0/Linux_mit/2_shell_tools_and_scripts/exercises/train2



maroc ()	{
	echo "$(pwd)" > ${HOME1}/marco_history.log
	echo "save pwd $(pwd)"
	}

polo()	{
#	 echo "$(cat "${HOME1}/marco_history.log")"
	 cd "$(cat "${HOME1}/marco_history.log")"
	 }
