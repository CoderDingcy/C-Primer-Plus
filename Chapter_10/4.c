#include<stdio.h>

double getMax(double arr[],int len)
{
double max=arr[0];
int subscript=0;
for(int i=0;i<len;i++)
{
if(arr[i]>=max)
{
    subscript=i;
    max=arr[i];
}
}

return subscript;
}

int main()
{
double source[5]={1.1,2.2,3.3,4.4,5.5};
printf("Max subscript:%lf",getMax(source,5));
return 0;
}