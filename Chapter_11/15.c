#include <stdio.h>
#include <string.h>
#include <ctype.h>
int myatoi(char *str)
{
    int len = strlen(str), n = 0;
    for (int i = 0; i < len; i++)
    {
        if (!isdigit(*(str + i)))
        {
            return 0;
        }
        else
            n = 10 * n + str[i] - '0';
    }
    return n;
}

char *s_gets(char *str)
{
    char *find, *result;
    if (result = fgets(str, 10, stdin))
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
}

int main()
{
    char string[40];
    printf("Please enter integer number(EOF to quit):\n");
    while (s_gets(string))
    {
        printf("number:%d\n", myatoi(string));
        printf("You can enter again:\n");
    }
    printf("Done.");
    return 0;
}