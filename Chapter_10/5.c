#include<stdio.h>

double maxSubmin(double arr[],int len)
{
double max=arr[0];
double min=arr[0];
for(int i=0;i<len;i++)
{
if(arr[i]>=max)
{
    max=arr[i];
}
if(arr[i]<=min)
{
    min=arr[i];
}
}

return max-min;
}

int main()
{
double source[5]={1.1,2.2,3.3,4.4,5.5};
printf("The difference between the maxand min:%lf",maxSubmin(source,5));
return 0;
}