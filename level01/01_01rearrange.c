#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20                 // 能处理的最大列数
#define MAX_INPUT 1000

int read_column_numbers(int columns[], int max);
void rearranged(char * output, char const * input, int n_columns, int const columns[]);
int main(void)
{
    int n_columns = 0;              // 有效列数，偶数
    int columns[MAX_COLS];          // 有效列标号
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    n_columns = read_column_numbers(columns, MAX_COLS);

    while(gets(input) != NULL){
        printf("Original input: %s\n", input);
        rearranged(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }
    return EXIT_SUCCESS;

    return 0;
}

int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;

    while(num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
        num++;
    
    if(num % 2 != 0){
        puts("Last column number is not paired.");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != EOF && ch != '\n')
        ;

    return num;
}

void rearranged(char * output, char const * input, int n_columns, int const columns[])
{
    int ind_col = 0;
    int output_ind_col = 0;             // output数组的ind管理
    int len = strlen(input);

    for(; ind_col < n_columns; ind_col += 2){
        int nchars = columns[ind_col + 1] - columns[ind_col] + 1;

        if(columns[ind_col] >= len || output_ind_col == MAX_INPUT - 1)
            break;
        if(output_ind_col + nchars > MAX_INPUT - 1)
            nchars = MAX_INPUT - 1 - output_ind_col;

        strncpy(output + output_ind_col, input + columns[ind_col], nchars);
        output_ind_col += nchars;
    }
    output[output_ind_col] = '\0';
}