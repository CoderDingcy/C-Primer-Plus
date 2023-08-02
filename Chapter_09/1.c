#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double min(double x, double y)
{

	return x < y ? x : y;
}
int main()
{
	printf("%lg", min(3.14, 5.22));

	return 0;
}