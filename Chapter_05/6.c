#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int num = 0;
	printf("Please enter a num:");
	scanf("%d", &num);
	int sum = 0,i=0;
	while (++i <= num)
	{
		sum = sum + i * i;
	}
	printf("Sum of squares of 1-%d:%d", num, sum);
	return 0;
}