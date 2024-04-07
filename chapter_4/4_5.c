// defines.c -- 使用limit.h和float.h头文件中定义的一些明示常量
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    // 打印系统中一些明示常量
    printf("Some number limits for this sytem:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    return 0;
}