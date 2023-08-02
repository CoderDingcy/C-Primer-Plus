#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void chline(char ch, int i, int j)
{
	for (int m = 0; m < j; m++)
	{
		for (int n = 0; n < i; n++)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
}


int main()
{
	chline('a', 3, 4);
	return 0;
}