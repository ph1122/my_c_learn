// showf_pt.c -- 以两种方式显示float类型的值
#include<stdio.h>

int main(void)
{
    // 定义并初始化float、double和long double类型的变量
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

		// 使用两种方式显示float类型的值
	printf("%f can be written %e\n", aboat, aboat);
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
		// 使用两种方式显示double类型的值
	printf("%f can be written %e \n",abet, abet);
		// 使用两种方式显示long double类型的值
	printf("%Lf can be written %Le\n", dip, dip);

	return 0;
}