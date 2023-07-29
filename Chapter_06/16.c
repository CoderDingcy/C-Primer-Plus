#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double Da_money=100, De_money=100;
	int year = 0;
	while (Da_money >= De_money)
	{
		Da_money = Da_money + 100 * 0.1;
		De_money = De_money + De_money * 0.05;
		year++;
	}
	printf("year:%d\n", year);
	printf("Daphne'investment:%lg\n", Da_money);
	printf("Deirdre'investment:%lg\n", De_money);
	return 0;
}