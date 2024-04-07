// escape.c -- 使用转义序列
// 上述注释描述了这个源文件的目的

#include <stdio.h>
int main(void)
{
    // 主函数，程序从这里开始执行

    float salary; // 声明一个浮点型变量 salary

    printf("\aEnter your desired monthly salary:"); // 输出提示信息
    printf(" $_______\b\b\b\b\b\b\b"); // 显示一个输入薪水的空格框
    scanf("%f", &salary); // 从控制台输入用户的薪水信息并存储在变量 salary 中
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0); // 输出月薪和年薪的信息
    printf("\rGee!\n"); // 显示 Gee!，\r 将光标移至行首

    return 0; // 返回 0 表示程序正常结束
}