#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void cube(double num)
{
	printf("Cubic value:%lg", num * num * num);
}

int main()
{
	double num;
	printf("Please enter a num(double):");
	scanf("%lf", &num);
	cube(num);



	return 0;
}