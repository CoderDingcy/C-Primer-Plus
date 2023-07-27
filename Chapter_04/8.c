#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define gallon_litre 3.785
#define mile_kilometer 1.609
int main()
{
	double mile, gallon;
	printf("Please enter travel mileage:");
	scanf("%lf", &mile);
	printf("Please enter the amount of gasoline consumed:");
	scanf("%lf", &gallon);

	printf("In USA,the travel per unit fuel consumed is %.1lf(mile/gallon)\n", mile / gallon);
	printf("In Europe,the fuel consumed per unit distance is %.1f(litre/100kilometer)",100.0*(gallon * gallon_litre) / (mile * mile_kilometer));

	return 0;
}