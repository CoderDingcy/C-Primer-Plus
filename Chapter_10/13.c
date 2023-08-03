#include<stdio.h>

void input(double(*arr)[5])
{
    printf("Please enter 15 numbers:");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void rowAverage(double(*arr)[5], double* p)
{
    double sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        p[i] = sum / 5.0;
    }

}

double totalAverage(double(*arr)[5])
{
    double sum = 0;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];

        }

    }
    return sum / 15;
}

double getMax(double(*arr)[5])
{
    double max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] >= max)
                max = arr[i][j];
        }

    }
    return max;
}

void myPrint(double(*arr)[5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%lg ", arr[i][j]);
        }
        putchar('\n');
    }
}

int main()
{
    double arr[3][5];
    double* rowAve;
    double p[3];
    double totalAve, max;

    input(arr);
    rowAverage(arr, p);
    totalAve = totalAverage(arr);
    max = getMax(arr);

    printf("Array:\n");
    myPrint(arr);
    printf("row1 average:%lg\nrow2 average:%lg\nrow3 average:%lg\n", p[0], p[1], p[2]);
    printf("total average:%lg\n", totalAve);
    printf("max:%lg\n", max);
    return 0;
}