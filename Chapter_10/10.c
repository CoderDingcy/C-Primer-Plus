#include<stdio.h>

void getArr(int n,int arr1[],int arr2[],int arr3[])
{
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
}

int main()
{
    int arr1[3]={1,2,3};
    int arr2[3]={2,2,2};
    int arr3[3];

    getArr(3,arr1,arr2,arr3);

    for(int i=0;i<3;i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}