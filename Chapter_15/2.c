#include <stdio.h>
#include <string.h>

int bstr_to_dec(const char *str);
char *itobs(int n, char arr[]);

int main(int argc, char *argv[])
{
    char bstr[sizeof(int) * 8 + 1];
    int v1 = bstr_to_dec(argv[1]);
    int v2 = bstr_to_dec(argv[2]);
    if (argc != 3)
    {
        printf("Error!");
    }
    printf("~%s = %s\n", argv[1], itobs(~v1, bstr));
    printf("~%s = %s\n", argv[2], itobs(~v2, bstr));
    printf("%s & %s = %s\n", argv[1], argv[2], itobs(v1 & v2, bstr));
    printf("%s | %s = %s\n", argv[1], argv[2], itobs(v1 | v2, bstr));
    printf("%s ^ %s = %s\n", argv[1], argv[2], itobs(v1 ^ v2, bstr));

    return 0;
}

int bstr_to_dec(const char *str)
{
    int sum = 0;
    int len = strlen(str);
    for (int i = len - 1, exp = 1; i >= 0; i--, exp *= 2)
    {
        sum += (str[i] - '0') * exp;
    }
    return sum;
}

char *itobs(int n, char *str)
{
    int size = sizeof(int) * 8;
    for (int i = size - 1; i >= 0; i--, n >>= 1)
    {
        str[i] = (n & 1) + '0';
    }
    str[size] = '\0';
    return str;
}
