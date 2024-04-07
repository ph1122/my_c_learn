// print2.c -- 更多printf()的特性

#include <stdio.h>

// 主函数
int main(void)
{
    // 声明并初始化变量
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    unsigned long long unbig = 32234254332145645634625;

    // 使用printf函数打印变量的值
    printf("un = %u and not %d \n", un, un);
    printf("end = %hd and %d\n", end , end);
    printf("big = %ld and not %hd\n", big ,big);
    printf("verybig = %lld and not %ld\n",verybig, verybig);
    printf("unbig = %llu and not %ld\n", unbig, unbig);
 
    // 返回0表示成功结束程序
    return 0;
}