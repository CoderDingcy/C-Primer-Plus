#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int num = 0;
	
	printf("Please enter a num:");

	scanf("%d", &num);
	int i = num;

	
	printf("%d ", i);
	while (i++ < num + 10)
	{
		printf("%d ", i);
	}


	return 0;
}