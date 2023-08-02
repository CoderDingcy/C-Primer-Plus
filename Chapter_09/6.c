#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void  swap(double* num1, double* num2)
{
	double temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void compare(double* num1, double* num2, double* num3)
{
	if (*num1 > *num2)
	{
		swap(num1, num2);
	}
	if (*num1 > *num3)
	{
		swap(num1, num3);
	}
	if (*num2 > *num3)
	{
		swap(num2, num3);
	}
}

int main()
{
	double num1 = 2.33, num2 = 3.24, num3 = 1.25;
	compare(&num1, &num2, &num3);
	printf("%lg %lg %lg", num1, num2, num3);
	return 0;
}