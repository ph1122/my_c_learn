// two_func.c -- 一个函数包含两个函数
#include <stdio.h>
void butler(void);	// 函数原型
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();      /* 函数调用  */
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)	// 函数定义
{
	printf("You rang, sir?");
}	
