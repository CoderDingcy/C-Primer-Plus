#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define min 10.0
#define extra 1.5

int main()
{
	double salary, tax, money,hours;


	printf("Please enter work hours in a week:");
	while ((scanf("%lf", &hours)) != 1 || hours < 0)
	{
		while (getchar() != '\n')
			continue;
		printf("Please enter a number(>= 0): ");
	}
	if (hours > 40)
	{
		salary = min * 40 + 1.5 * (hours - 40) * min;
	}
	else
	{
		salary = min * hours;
	}

	if (salary <= 300)
		tax = salary * 0.15;
	else if (salary <= 450)
		tax = 300 * 0.15 + (salary - 300) * 0.2;
	else
		tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;

	money = salary - tax;
	printf("salary:%lg\ntax:%lg\nincome:%lg", salary, tax, money);
	return 0;
}