#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int ch;
    int ct = 0;

    printf("Please enter some characters:\n");
    while ((ch = getchar()) != EOF)
    {
        ct++;
    }
    printf("Characters: %d\n", ct);

    return 0;
}

