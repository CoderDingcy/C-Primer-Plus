#include <stdio.h>

void storeArr(char arr[], int n)
{
    printf("Please enter %d characters:\n", n);
    fgets(arr, n + 1, stdin);
}

int main()
{
    char string[40];
    char ch;
    storeArr(string, 10);
    fputs(string, stdout);

    return 0;
}