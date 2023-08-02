#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double harmonic_avg(double num1, double num2)
{
	return 2 / (1 / num1 + 1 / num2);

}

int main()
{

	printf("%lg", harmonic_avg(0.5, 0.5));
}