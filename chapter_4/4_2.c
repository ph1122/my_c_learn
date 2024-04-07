// praise1.c -- praises the user for their input使用不同类型的字符串

#include <stdio.h>

// 使用宏定义来定义字符串常量
#define PRAISE "You are an extraordinary being!"

int main() {
    char name[40];
    
    // 请求用户输入姓名
    printf("What is your name? ");
    scanf("%s", name);
    
    // 输出欢迎及赞美信息
    printf("Hello, %s. %s\n", name, PRAISE);
    
    return 0;
}