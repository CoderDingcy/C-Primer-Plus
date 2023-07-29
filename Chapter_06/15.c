#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char input[255];
    int i = 0;
    printf("Please enter character(enter to quit):");
    while (true)
    {
        scanf("%c", &input[i]);
        if (input[i] == '\n')
            break;
        i++;
    }
    for (i--; i >= 0; i--)
    {
        printf("%c", input[i]);
    }
    return 0;
}