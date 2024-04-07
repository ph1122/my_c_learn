// 包含所需的头文件
#include <stdio.h>
#include <string.h>

// 定义密度常量
#define DENSITY 62.4

// 主函数
int main()
{
    // 定义变量
    float weight, volume;
    int size, letters;
    char name[40];

    // 提示用户输入信息
    printf("Hi! What's your first name?\n");
    // 读取用户输入的字符串
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f",&weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    // 输出结果
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters.\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}