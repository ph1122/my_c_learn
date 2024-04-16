/* width.c -- 字段宽度*/

#include <stdio.h>

#define PAGES 959  // 定义常量 PAGES 为 959

int main(void)
{
    printf("*%d*\n", PAGES);  // 打印 PAGES 的值，不指定字段宽度
    printf("*%2d*\n", PAGES);  // 在字段宽度为 2 的情况下打印 PAGES 的值
    printf("*%10d*\n", PAGES);  // 在字段宽度为 10 的情况下打印 PAGES 的值
    printf("*%-10d*\n", PAGES);  // 在字段宽度为 10 的情况下左对齐打印 PAGES 的值

    return 0;
}