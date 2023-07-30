#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char c;
	int num = 0;
	printf("Enter some characters(# to quit):");
	while ((c = getchar()) != '#')
	{
		switch (c)
		{
		case '.':
		{
			putchar('!');
			num++;
			break;
		}
		case '!':
		{
			printf("%s", "!!");
			num++;
			break;
		}
		default:
		{
			putchar(c);
			break;
		}
		}

	}
	printf("Replace times:%d", num);
	return 0;
}