// charcode.c -- 显示字符的代码编号

#include <stdio.h>

int main(void)
{
    // 主函数
 char ch;

 printf("Please enter a character.\n"); // 提示用户输入一个字符
 scanf("%c", &ch); // 从用户输入中读取字符并存储在变量 ch 中
 printf("The code for %c is %d or %#o or %#x.\n", ch, ch, ch, ch); // 显示字符及其对应的十进制、八进制和十六进制代码编号
 
 return 0; // 返回 0，表示程序顺利执行
}