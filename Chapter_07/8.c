#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int get_choice()
{
	int ch;
	scanf("%d",&ch);
	while (getchar() != '\n')
		continue;
	return ch;
}

void compute(double min,double hours)
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
	printf("1) $8.75/hr                          2) $9.33/hr\n");
	printf("3) $10.00/hr                         4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
	printf("Please you choose: ");
	ch=get_choice();
	while (ch != 1 && ch != 2 && ch != 3 && ch != 4 && ch != 5)
	{
		printf("Please enter 1, 2, 3, 4 or 5: ");
		ch = get_choice();
	}
	return ch;
}

int main()
{
	int choice;
	double n;
	while ((choice = show_menu()) != 5)
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
		case 1:
		{
			compute(8.75,n);
			break;
		}
		case 2:
		{
			compute(9.33, n);
			break;
		}
		case 3:
		{
			compute(10.00, n);
			break;
		}
		case 4:
		{
			compute(11.20, n);
			break;
		}
		default:
			break;
		}
		putchar('\n');
	}
	
	printf("Done.");
	return 0;
}