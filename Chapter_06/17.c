#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

int main()
{
	double CL_money = 1e+6;
	int year = 0;
	while (CL_money>0)
	{
		year++;
		CL_money = CL_money + 0.08 * CL_money-1e+5;
	}
	printf("Spend all your money in %d years", year);
	return 0;
}