#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define sixty 60

int main()
{
	int num =sixty;
	while (num > 0)
	{
		printf("Please enter minutes:");
		scanf("%d", &num);


		if(num!=0)
		printf("The corresponding format(hour:minute): %dh%dm.\n", num / sixty, num % sixty);


	}
	return 0;
}