// platinum.c

// 主函数，程序入口
#include <stdio.h>
int main(void)
{
    float weight; // 声明变量 weight，存储输入的重量
    float value; // 声明变量 value，存储计算得到的价值

    // 输出提示信息
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    // 从用户输入获取重量
    scanf("%f", &weight);
    
    // 计算价值
    value = 1700.0 * weight * 14.5833;

    // 输出计算结果
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0; // 返回程序执行成功
}