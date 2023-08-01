#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char get_choice()
{
	char ch;
	scanf("%c", &ch);
	while (getchar() != '\n')
		continue;
	return ch;
}

void compute(double min, double hours)
{
	double salary, tax, money;

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
}

int show_menu()
{
	int ch;
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr                          b) $9.33/hr\n");
	printf("c) $10.00/hr                         d) $11.20/hr\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
	printf("Please you choose: ");
	ch = get_choice();
	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q')
	{
		printf("Please enter a, b, c, d or q: ");
		ch = get_choice();
	}
	return ch;
}

int main()
{
	int choice;
	double n;
	while ((choice = show_menu()) != 'q')
	{
		printf("Please enter work hours in a week:");
		while (scanf("%lf", &n) == 1 && n < 0)
		{
			while (getchar() != '\n')
				continue;
			printf("Enter a positive number:");
		}
		switch (choice)
		{
		case 'a':
		{
			compute(8.75, n);
			break;
		}
		case 'b':
		{
			compute(9.33, n);
			break;
		}
		case 'c':
		{
			compute(10.00, n);
			break;
		}
		case 'd':
		{
			compute(11.20, n);
			break;
		}
		default:
			break;
		}
		putchar('\n');
		while (getchar() != '\n')
			continue;
	}

	printf("Done.");
	return 0;
}