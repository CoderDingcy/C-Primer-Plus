#include<stdio.h>

void bubbleSort(double source[],int len)
{
for(int i=0;i<len-1;i++)
{
for(int j=0;j<len-i-1;j++)
{
    if(source[j]<=source[j+1])
    {
        double temp;
        temp=source[j];
        source[j]=source[j+1];
        source[j+1]=temp;
    }
}
}
}

int main()
{
double source[5]={1.1,2.2,3.3,4.4,5.5};
bubbleSort(source,sizeof(source)/sizeof(source[0]));
for(int i=0;i<sizeof(source)/sizeof(source[0]);i++)
{
    printf("%lg ",source[i]);
}

    return 0;
}