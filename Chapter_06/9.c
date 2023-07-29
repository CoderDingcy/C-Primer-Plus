#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double compute(double n1, double n2)
{
	return (n1 - n2) / (n1 * n2);
}

int main()
{
	double num1, num2;
	printf("Please enter two numbers('q' to quit):");
	while (scanf("%lf%lf", &num1, &num2) == 2)
	{
		printf("(num1-num2)/(num1*num2)=%lg\n",compute(num1,num2));
		printf("You can enter again('q' to quit):");
	}
	printf("Done.");
	return 0;
}