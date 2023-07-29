#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int upper, lower;
	printf("Please enter the upper limit of the form:");
	scanf("%d", &upper);
	printf("Please enter the lower limit of the form:");
	scanf("%d", &lower);
	printf("%s\t%s\t%s\t\n","number","square","cube");
	for (int i=lower;i<=upper;i++)
	{
		printf("%d\t%d\t%d\t\n",i,i*i,i*i*i);
	}
	return 0;
}