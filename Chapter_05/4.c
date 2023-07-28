#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double height = 1.0;
	while (height > 0)
	{
		printf("Enter a height in centimetres (<=0 to quit):");
		scanf("%lf", &height);
		if (height > 0)
			printf("%lg cm = %lg feet, %lg inches\n", height, height / 30.48, height / 2.54);
	}

	return 0;
}