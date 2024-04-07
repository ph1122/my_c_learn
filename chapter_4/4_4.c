/* 
   pizza.c -- calculate the circumference and area of a pizza 
   在披萨饼程序中使用已定义的常量
   该程序用于计算披萨饼的周长和面积
*/

#include <stdio.h>

#define PI 3.14159          // 记住，符号常量后面的内容被用来替换符号常量

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n"); // 请求输入披萨饼的半径
    scanf("%f", &radius); // 读取输入的半径值
    area = PI * radius * radius; // 计算面积
    circum = 2.0 * PI * radius; // 计算周长
    printf("Your basic pizza parameters are as follows:\n"); // 打印披萨饼的基本参数
    printf("circumference = %1.2f, area = %1.2f\n", circum, area); // 打印计算出的周长和面积

    return 0;
}