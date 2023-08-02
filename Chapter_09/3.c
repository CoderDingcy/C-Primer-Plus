#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void show(char ch,int cols,int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
}

int main()
{
	show('a', 3, 4);
	return 0;
}