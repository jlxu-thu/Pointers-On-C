/*
** File: exe01_03.c
** Desp: 从标准输入读取内容到标准输出，同时计算checksum（校验和），写在字符后面
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    signed char check_sum = -1;
    int ch;

    while((ch = getchar()) != EOF)
    {
        putchar(ch);
        check_sum += ch;
    }
    printf("%d\n", check_sum);

    return EXIT_SUCCESS;
}