#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void larger_of(double* num1, double* num2)
{
	*num1 > * num2 ? (*num2 = *num1) : (*num1 = *num2);
}

int main()
{
	double num1 = 2.33, num2 = 3.55;
	larger_of(&num1, &num2);

	printf("%lg %lg", num1, num2);

	return 0;
}