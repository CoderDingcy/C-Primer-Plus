#include<stdio.h>

void copy_ptrs(int target[],int* source,int* tsource)
{
for(int* i=source;i<=tsource;i++)
{
    target[(int)(i-source)]=*i;
}
}

int main()
{
    int source[7]={1,2,3,4,5,6,7};
    int target[3];
    copy_ptrs(target,source+2,source+4);
    for(int i=0;i<3;i++)
    {
        printf("%d ",target[i]);
    }
    return 0;
}