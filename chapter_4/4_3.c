// praise2.c -- praises the user for their input使用不同类型的字符串
// 如果编译器不识别 %zd，尝试换成 %u 或 %lu。
#include <stdio.h>
#include <string.h>
// 使用宏定义来定义字符串常量
#define PRAISE "You are an extraordinary being!"

int main() {
    char name[40];
    
    // 请求用户输入姓名
    printf("What is your name? ");
    scanf("%s", name);
    
    // 输出欢迎及赞美信息
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
           strlen(name), sizeof name );
    printf("The phrase of praise has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    // 对于PRAISE，sizeof 运算符返回的是字符串的长度（把字符串末尾不可见的空字符也算在内），而 strlen 则返回的是字符数。
    
    // siezof 何时使用圆括号取决于运算对象是类型还是特定量。
    // 对于类型，圆括号是必需的；对于特定量，则不需要，圆括号可有可无。
    // 但还是建议所有情况下都加上圆括号。
    return 0;
}