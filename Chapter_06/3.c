#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 70; j >70 - i; j--)
			printf("%c",j);
		printf("\n");
	}
	return 0;
}