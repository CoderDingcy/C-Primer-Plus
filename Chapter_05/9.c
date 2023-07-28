#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Temperatures(double tem)
{
	const double n1 = 5.0;
	const double n2 = 9.0,n3=32.0,n4=273.16;

	printf("Fahrenheit temperature:%.2lf\n", tem);
	printf("Centigrade temperature:%.2lf\n", n1 / n2 * (tem - n3));
	printf("Kelvin temperature:%.2lf\n", n1 / n2 * (tem - n3)+n4);

}

int main()
{
	double tem;
	printf("Please enter a temperature(q to quit):");
	while (1==scanf("%lf", &tem))
	{
		Temperatures(tem);
		printf("You can enter again(q to quit):");
	}

	printf("Done.");
	return 0;
}