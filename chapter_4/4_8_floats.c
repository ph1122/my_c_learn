// floats.c -- demonstrate the use of floating-point format specifiers
// 一些浮点型修饰符的组合
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99; // 定义常量RENT并赋值为3852.99

    printf("*%f*\n", RENT);       // 以浮点数表示打印RENT的值
    printf("*%e*\n", RENT);       // 以指数形式表示打印RENT的值
    printf("*%4.2f*\n", RENT);    // 最小宽度为4，小数点后保留2位的浮点数表示
    printf("*%3.1f*\n", RENT);    // 最小宽度为3，小数点后保留1位的浮点数表示
    printf("*%10.3f*\n", RENT);   // 最小宽度为10，小数点后保留3位的浮点数表示
    printf("*%10.3e*\n", RENT);   // 最小宽度为10，小数点后保留3位的指数形式表示
    printf("*%+4.2f*\n", RENT);    // 带符号的最小宽度为4，小数点后保留2位的浮点数表示
    printf("*%010.2f*\n", RENT);  // 最小宽度为10，左侧补0，小数点后保留2位的浮点数表示

    return 0;
}