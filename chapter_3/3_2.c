// print1.c -- 演示了printf()的一些特性
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("%d minus %d is %d\n", ten, ten, ten - ten);
	// printf("%d minus %d is %d\n", ten);
	// 第一个%d 对应ten的值，但是由于缺少两个参数，没有给后两个
	// %d提供值，所以打印出的值是内存中的任意值。
	return 0;
}
