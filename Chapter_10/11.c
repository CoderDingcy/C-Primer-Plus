#include<stdio.h>

void show(double (*p)[5],int rows)
{
for(int i=0;i<rows;i++)
{
    for(int j=0;j<5;j++)
    {
     printf("%lg ",*(*(p+i)+j));
    }
    printf("\n");
}

}

void newArr(double (*p)[5],int rows)
{
for(int i=0;i<rows;i++)
{
    for(int j=0;j<5;j++)
    {
     *(*(p+i)+j)*=2;
    }
    printf("\n");
}

}

int main()
{
    double source[3][5]={
        {1.1,2.2,3.3,4.4,5.5},
        {1.2,2.3,3.4,4.5,5.6},
        {9.2,7.3,4.4,4.6,7.6}
        };
    newArr(source,3);
    show(source,3);
    return 0;
}