#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int days = 0, i = 0;
	printf("Please enter days:");
	scanf("%d", &days);
	double sum=0.0;
	while ( ++i<=days)
	{
		double l;
		printf("Day%d:",i);
		scanf("%lf", &l);
		sum = sum + l;
	}
	printf("Sum:%.12lg\n", sum);
	return 0;
}