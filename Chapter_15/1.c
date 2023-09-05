#include <stdio.h>
#include <string.h>
#include <math.h>

int change(char* p, int len)
{
    int sum = 0;
    for (int i = len - 1, exp = 1; i >= 0; i--, exp  *= 2)
    {
        sum += (p[i] - '0') * exp;
    }
    return sum;
}

int main()
{
    char* pbin = "01001001";
    int len = strlen(pbin);
    int result = change(pbin, len);
    printf("\"%s\" = %d", pbin, result);
    return 0;
}