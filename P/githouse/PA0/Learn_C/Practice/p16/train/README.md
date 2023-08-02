附加题：
如何在栈上创建结构体，就像你创建任何其它变量那样。
如何使用x.y而不是x->y来初始化结构体。
如何不使用指针来将结构体传给其它函数。

#
	def:
	struct InitMember
	{
	    int first;
		double second;
		char* third;
		float four;
	};


#  c语言结构体初始化的四种方法：
## 1,定义时赋值：
	struct InitMember test = {-10,3.141590，"method one"，0.25};
	
## 2,定以后逐个赋值：
	struct InitMember test;
		test.first = -10;
		test.second = 3.141590;
		test.third = "method two";
		test.four = 0.25;

## 3,定义时乱序赋值 (c语言风格)
	struct InitMember test = {
		.second = 3.141590,
		.third = "method three",
	    .first = -10,
	    .four = 0.25
	};

## 4,定义时乱序赋值 (c++语言风格)
	struct InitMember test = {
		second：3.141590,
		third："method three",
		first：-10,
	    four：0.25
	};
