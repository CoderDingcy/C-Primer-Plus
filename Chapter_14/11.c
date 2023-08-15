#include <stdio.h>
#include <math.h>
#define LEN 5
void transform(double *source, double *target, int n, double (*p)(double))
{
    for (int i = 0; i < n; i++)
    {
        target[i] = (*p)(source[i]);
    }
}

double square(double x)
{
    return x * x;
}

double triple(double x)
{
    return x * x * x;
}

void show_array(double *x, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%lg ", x[i]);
    }
    putchar('\n');
}

int main()
{
    double x[LEN] = {2.0, 4.0, 6.0, 8.0, 9.0}, y[LEN] = {0.0};

    printf("array:");
    show_array(x, LEN);

    printf("target array:");
    show_array(y, LEN);

    transform(x, y, LEN, sqrt);
    printf("After square root:");
    show_array(y, LEN);

    transform(x, y, LEN, cbrt);
    printf("After opening cube:");
    show_array(y, LEN);

    transform(x, y, LEN, square);
    printf("After square:");
    show_array(y, LEN);

    transform(x, y, LEN, triple);
    printf("After cube:");
    show_array(y, LEN);

    return 0;

}