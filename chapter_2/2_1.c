// first.c
#include <stdio.h>  // #include是预处理指令
					// stdio.h文件中包含了供编译器使用的输入和屏幕输出的函数
int main(void)		// main()总是第 1 个被调用的函数
					// int 表明main()函数返回一个整数
					// void 表明main()不带任何参数
{
	int num;		// 变量的声明
	num = 1;		// 赋值表达式语句
	/* 一个简单的c程序 */
	printf("I an a simple ");
	printf("computer.\n");	// \n 告诉计算机另起一行，把光标移至下一行。
	printf("My favorite number is %d become it is first.\n", num);

	return 0;
}
