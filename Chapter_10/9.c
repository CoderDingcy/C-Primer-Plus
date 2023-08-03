#include<stdio.h>

void show(int rows,int cols,double arr1[rows][cols],double arr2[rows][cols])
{
    printf("{\n");
    for(int i=0;i<rows;i++)
    {
        printf("{");
        for(int j=0;j<cols;j++)
        {
            printf("%lg ",arr1[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
    printf("\n");
    printf("{\n");
    for(int i=0;i<rows;i++)
    {
        printf("{");
        for(int j=0;j<cols;j++)
        {
            printf("%lg ",arr2[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
}

void copyArr(int rows,int cols,double source[rows][cols],double target[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            target[i][j]=source[i][j];
        }

    }
}

int main()
{
    double source[3][5]={
    {1.1,2.2,3.3,4.4,5.5},
    {1.2,2.3,3.4,4.5,5.6},
    {9.2,7.3,4.4,4.6,7.6}
    };

    double target[3][5]={0.0};
    copyArr(3,5,source,target);
    show(3,5,source,target);
    return 0;
}