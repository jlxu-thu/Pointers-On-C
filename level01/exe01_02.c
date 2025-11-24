/*
** File: exe01_02.c
** Desp: 从标准输入读取到标准输出，并对输出行标号
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int line = 0;
    int ch;
    int at_beginning = 1;   // 1在行首，0不在行首

    while((ch = getchar()) != EOF)
    {
        if(at_beginning){
            printf("%d: ", ++line);
            at_beginning = 0;
        }
        putchar(ch);
        if(ch == '\n')
            at_beginning = 1;
    }

    return EXIT_SUCCESS;
}