#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int  main()
{
	double num1[8] = { 1.23,2.345,6.345,1.567,5.234,8.223,9.123,3.456 };
	double num2[8];

	for (int i = 0; i < 8; i++)
	{
		double sum = 0;
		for (int j = 0; j <= i; j++)
			sum = num1[j] + sum;
		num2[i] = sum;
	}

	for (int i = 0; i < 8; i++)
	{
		printf("%lg\t", num1[i]);

	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%lg\t", num2[i]);

	}

	return 0;
}