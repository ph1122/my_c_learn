/* badcount.c -- 参数错误的情况  */
#include <stdio.h>
int main()
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);
	printf("%d %d %d\n", n);
	printf("%f %d\n", f, g);	// %d 显示float 类型的值，其值不会被转换成int类型

	return 0;
}
