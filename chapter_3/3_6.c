// altnames.c -- 可移植整数类型名

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    // 定义一个 int32_t 类型的变量 me32
    int32_t me32;
    
    // 给变量 me32 赋值
    me32 = 45933945;
    // 打印输出假设 int32_t 是 int 类型时的结果
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    // 打印输出使用 inttypes.h 中的宏来避免假设的结果
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32= %" PRId32 "\n", me32);

    return 0;
}