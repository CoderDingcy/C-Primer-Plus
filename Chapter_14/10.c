#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include<string.h>
#define LEN 4

double twice(double x)
{
    return 2.0 * x;
}

double half(double x)
{
    return 0.5 * x;
}

double square(double x)
{
    return x * x;
}

void show(int n, double (*arr[LEN])(double), double x)
{
    printf("After operating:%lg\n", (*arr[n])(x));
}

char get_first()
{
    int ch;
    do
    {
        ch = tolower(getchar());
    } while (isspace(ch));
    while (getchar() != '\n')
        continue;

        return ch;
}
int show_menu()
{
    int ch;

    puts("+-------------------------------+");
    puts("|a) double               b) half|");
    puts("|c) square               d) sqrt|");
    puts("|q) quit                        |");
    puts("+-------------------------------+");
    printf("Please you choose: ");
    while (ch = get_first(), NULL == strchr("abcdq", ch))
    {
        printf("Please enter a, b, c, d or q: ");
    }
    return ch;
}

int main()
{
    int ch;
    double num;
    double (*arr[LEN])(double) = {twice, half, square, sqrt};
    while ((ch = show_menu()) != 'q')
    {
        printf("Please enter a number:\n");
        while (scanf("%lf", &num) != 1)
        {
            while (getchar() != '\n')
                continue;
            printf("Please enter a number again:\n");
        }
        switch (ch)
        {
        case 'a':
            show(0, arr, num);
            break;
        case 'b':
            show(1, arr, num);
            break;
        case 'c':
            show(2, arr, num);
            break;
        case 'd':
            show(3, arr, num);
            break;
        }
    }
    printf("Done.");
    return 0;
}