#include <stdio.h>
#include <string.h>
char *itobs(int n, char *str);
int onbits(int x);
int main(int argc, char *argv[])
{
    int x = 13;
    char bstr[8 * sizeof(int) + 1];

    printf("%d(%s) has %d bit on.\n", x, itobs(x, bstr), onbits(x));

    return 0;
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

int onbits(int x)
{
    int count = 0;
    for (int i = 8 * sizeof(int)-1; i >= 0; i--)
    {
        count += (x >> i) & 1;
    }
    return count;
}