/*
** File: exe01_04.c
** Desp: 从标准输入读取字符串，打印最长的那一行字符串
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1001
int main(void)
{
    char input[MAX_LEN];
    char longest[MAX_LEN];
    int longest_len = -1;
    int len;

    while(gets(input)){
        len = strlen(input);
        if(len > longest_len){
            longest_len = len;
            strcpy(longest, input);
        }
    }
    if(longest >= 0)
        puts(longest);

    return EXIT_SUCCESS;
}