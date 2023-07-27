#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double num;
	printf("enter a floating-poing value:");
	scanf("%lf", &num);

	printf("a.The input is %.1lf or %.1e\n",num,num);
	printf("a.The input is %+.3lf or %.3E",num,num);
		

	return 0;
}