/* printout.c -- 使用转换说明 */
#include <stdio.h>
#define PI 3.141593

int main(void)
{
    int number = 7;  // 声明并初始化变量number为7
    float pies = 12.75;  // 声明并初始化变量pies为12.75
    int cost = 7800;  // 声明并初始化变量cost为7800

    printf("The %d contestants ate %f pies.\n", number, pies);  // 打印输出比赛选手数量和吃的馅饼数量
    printf("The value of pi is %f.\n", PI);  // 打印输出pi的值
    printf("Farewell!thou art too dear for my possessing.\n");  // 打印输出一行文本
    printf("%c%d", '$', 2 * cost);  // 打印输出'$'和2倍cost的值

    return 0;  // 返回0
}