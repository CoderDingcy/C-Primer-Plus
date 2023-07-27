#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<float.h>

int main()
{
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;

	printf("num1:%.6lf\n", num1);
	printf("num1:%.12lf\n", num1);
	printf("num1:%.16lf\n", num1);

	printf("num2:%.6lf\n", num2);
	printf("num2:%.12lf\n", num2);
	printf("num2:%.16lf\n", num2);

	printf("FLT_DIG:%d\n", FLT_DIG);
	printf("DBL_DIG:%d\n", DBL_DIG);
	return 0;
}