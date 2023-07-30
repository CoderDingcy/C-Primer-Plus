#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char c;
	int space = 0, enter = 0, other = 0;
	while ((c = getchar()) != '#')
	{
		if (c == ' ')
			space++;
		else if (c == '\n')
			enter++;
		else
			other++;

	}

	printf("space: %d\nenter: %d\nother: %d", space, enter, other);

	return 0;
}