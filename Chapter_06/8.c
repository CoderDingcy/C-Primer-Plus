#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double num1, num2;
	printf("Please enter two numbers('q' to quit):");
	while (scanf("%lf%lf", &num1, &num2) == 2)
	{
		printf("(num1-num2)/(num1*num2)=%lg\n", (num1 - num2) / (num1 * num2));
		printf("You can enter again('q' to quit):");
	}
	printf("Done.");
	return 0;
}