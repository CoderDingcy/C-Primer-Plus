#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[8];
	printf("Please enter eight numbers:");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("Reverse output:");
	for (int i = 7; i >= 0; i--)
		printf("%d ", num[i]);


	return 0;
}