// bases.c -- 以十进制、八进制、十六进制打印十进制的100
#include <stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	/* 如果要在八进制和十六进制前显示0和0x前缀，
	 * 要分别在转换说明中加入#。
	 */
		

	return 0;
}
