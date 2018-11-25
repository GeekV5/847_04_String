//第四章 串
#include <stdio.h>

#define maxSize 100
//串的存储结构

//定长顺序存储表示（顺序存储结构）
typedef struct
{
    /*maxSize为已经定义的常量，表示串的最大长度；str数组长度定义为maxSize+1，是因为多出一个'\0'作为结束标记*/
    char str[maxSize+1];
    int length;
}Str;

//变长分配存储表示
typedef struct
{
    char *ch;      //指向动态分配存储区首地址的字符指针
    int length;    //串长度
}LStr;

int main() {
    printf("Hello, World!\n");
    return 0;
}