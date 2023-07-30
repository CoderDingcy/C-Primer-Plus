#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double input()
{
	double b;
	printf("Please enter pounds:");
	while (scanf("%lf", &b) != 1 || b < 0)
	{
		while (getchar() != '\n')
			continue;
		printf("Please enter again:");
	}
	return b;
}

void eatchar()
{
	while (getchar() != '\n')
		continue;
}
int main()
{
	char ch;
	double artichoke_p=0, beet_p=0, carrot_p=0;
	double shipping_charges=0,pounds=0,sum=0,cost=0;
	int flag = 0;//Дђел

	while (1)
	{
		printf("********************************\n");
		printf("a) Artichoke\n");
		printf("b) Beet\n");
		printf("c) Carrot\n");
		printf("q) quit\n");
		printf("********************************\n");
		printf("Please select a choice:");
		while (scanf("%c",&ch) != 1 ||((ch != 'a' && ch != 'b' && ch != 'c' && ch != 'q')))
		{
			eatchar();
			printf("Please enter \"a or b or c or q\" to select:");

		}
			if (ch == 'q')
			break;

			switch (ch)
			{
			case 'a':
			{
				printf("\"artichoke\"\n");
				artichoke_p = input() + artichoke_p;
				break;
			}
			case 'b':
			{
				printf("\"beet\"\n");
				beet_p = input() + beet_p;
				break;
			}
			case 'c':
			{
				printf("\"carrot\"\n");
				carrot_p = input() + carrot_p;
				break;
			}
			}
			printf("\n");
			eatchar();
	}
	pounds = artichoke_p + carrot_p + beet_p;
	if (pounds <= 5)
		shipping_charges = 6.5;
	else if (pounds <= 20 && pounds > 5)
		shipping_charges = 14;
	else
		shipping_charges = 14 + (pounds - 20) * 0.5;
	sum = artichoke_p * 2.05 + beet_p * 1.15 + carrot_p * 1.09;
	cost = sum + shipping_charges;
	if (sum >= 100)
	{
		flag = 1;
		sum = sum * 0.95;
		cost = sum + shipping_charges;
	}
	
	printf("\"Purchase information\"\n");
	printf("Artichoke:%lf\tOrdered weight(pound):%lf  \tThe cost of artichoke:%lf\n",2.05,artichoke_p,artichoke_p*2.05);
	printf("Beet:%lf     \tOrdered weight(pound):%lf  \tThe cost of beet:%lf\n",1.15,beet_p,beet_p*1.15);
	printf("Carrot:%lf   \tOrdered weight(pound):%lf  \tThe cost of carrot:%lf\n",1.09,carrot_p,carrot_p*1.09);
	printf("The cost of vegetables ordered:%lf\n",sum);
	if(flag)
	printf("Order discount:%s\n","95%");
	printf("shipping and handling charges:%lf\n", shipping_charges);
	printf("The total cost of the order:%lf\n", cost);

	
	return 0;
}