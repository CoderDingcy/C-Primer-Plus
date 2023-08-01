#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>

//获取第一个非空字符
char getfirst()
{
	int ch;
	while (isspace(ch = getchar()))
	{

	}
	return ch;

}

char showmenu()
{
	char ch;
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\n");
	printf("m. multiply\td. divide\n");
	printf("q. quit\n");
	ch=getfirst();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please enter with a,s,m,d or q :");
		ch = getfirst();
	}
	while (getchar() != '\n')
		continue;
	return ch;
}

int main()
{
	char choice;
	char ch;
	float num1, num2;
	while (1)
	{
		choice=showmenu();
		if (choice == 'q')
			break;
		printf("Enter first number:");
		while(scanf("%f", &num1)!=1)
		{
			while ((ch=getchar()) != '\n')
			{
				putchar(ch);
			}
			printf(" is not a number.\n");
			printf("Please enter a number,such as 2.5,-1.78e8,or 3:");
		}
		while (getchar() != '\n')
			continue;
		printf("Enter second number:");
		while(scanf("%f", &num2) != 1)
		{
			while ((ch=getchar()) != '\n')
			{
				putchar(ch);
			}
			printf(" is not a number.\n");
			printf("Please enter a number,such as 2.5,-1.78e8,or 3:");
		}
		while (getchar() != '\n')
			continue;
		switch (choice)
		{
		case 'a':
			printf("%g + %g = %g\n", num1, num2, num1 + num2);
			break;
		case 'm':
			printf("%g * %g = %g\n", num1, num2, num1 * num2);
			break;
		case 'd':
			printf("%g / %g = %g\n", num1, num2, num1 / num2);
			break;
		case 's':
			printf("%g - %g = %g\n", num1, num2, num1 - num2);
			break;

		}
		
	
	}
	printf("Bye.");
	return 0;
}