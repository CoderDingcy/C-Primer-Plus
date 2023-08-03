#include<stdio.h>

void copy_arr(double *target,double *source,int n)
{
for(int i=0;i<n;i++)
{
    target[i]=source[i];
}
}

void copy_ptr(double target[],double source[],int n)
{
for(int i=0;i<n;i++)
{
    *(target+i)=*(source+i);
}
}

void copy_ptrs(double target[],double* source,double* tsource)
{
for(double* i=source;i<=tsource;i++)
{
    target[(int)(i-source)]=*i;
}
}

int main()
{
double source[5]={1.1,2.2,3.3,4.4,5.5};
double target1[5];
double target2[5];
double target3[5];

copy_arr(target1,source,5);
copy_ptr(target2,source,5);
copy_ptrs(target3,source,source+5);

for(int i=0;i<5;i++)
{
    printf("tar1[%d]:%lg\ttar2[%d]:%lg\ttar3[%d]:%lg\t\n",i,target1[i],i,target2[i],i,target3[i]);
}


    return 0;
}