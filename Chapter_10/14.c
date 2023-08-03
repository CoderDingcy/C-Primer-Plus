#include<stdio.h>

void input(int rows,int cols, double arr[rows][cols])
{
    printf("Please enter 15 numbers:");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void rowAverage(int rows,int cols,double arr[rows][cols], double* p)
{
    double sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        p[i] = sum / 5.0;
    }

}

double totalAverage(int rows,int cols,double arr[rows][cols])
{
    double sum = 0;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];

        }

    }
    return sum / 15;
}

double getMax(int rows,int cols,double arr[rows][cols])
{
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] >= max)
                max = arr[i][j];
        }

    }
    return max;
}

void myPrint(int rows,int cols,double arr[rows][cols])
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

    input(3,5,arr);
    rowAverage(3,5,arr, p);
    totalAve = totalAverage(3,5,arr);
    max = getMax(3,5,arr);

    printf("Array:\n");
    myPrint(3,5,arr);
    printf("row1 average:%lg\nrow2 average:%lg\nrow3 average:%lg\n", p[0], p[1], p[2]);
    printf("total average:%lg\n", totalAve);
    printf("max:%lg\n", max);
    return 0;
}
