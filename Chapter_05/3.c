#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int days = 7;
	while (days > 0)
	{
		printf("Please enter days:");
		scanf("%d", &days);
		printf("%d days are %d weeks, %d days.\n", days, days / 7, days % 7);
	}

	return 0;
}