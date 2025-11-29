/*
** File: exe02_02.c
** Desp: 验证花括号是否正确的配对
*/
#include <stdio.h>
int
main(void)
{
    int ch;
    int braces = 0;
    int flag = 1;

    while((ch = getchar()) != EOF) {
        if(ch == '{')
            braces += 1;
        if(ch == '}')
            if(braces == 0)
                flag = 0;
            else
                braces -= 1;  
    }
    if(braces==0 && flag == 1)
        printf("matches.\n");
    else
        printf("unmatches.\n");

    return 0;
}