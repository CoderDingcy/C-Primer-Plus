#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 65;
	for (int i = 1; i <= 6; i++)
	{
		for ( int j=0; j <i; j++)
			printf("%c",num++);
		printf("\n");
	}
	return 0;
}