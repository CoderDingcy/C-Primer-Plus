#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char letter ;
	printf("Please enter a letter:");
	scanf("%c", &letter);
	for (int i = 65; i <=(int)letter; i++)
	{
		for (int j =1; j <=(int)letter-i; j++)
		{
			printf(" ");
		}

		for (int j = 65; j <= i; j++)
			printf("%c", j);
		for (int j = i - 1; j >= 65; j--)
		{
			printf("%c", j);
		}
		for (int j = 1; j <= (int)letter - i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}