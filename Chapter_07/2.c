#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char c;
	int sum=0;

	while ((c = getchar()) != '#')
	{
		if (sum % 8 == 0)
			putchar('\n');
		sum++;

		
		if (c == '\n')
			printf("\\n:%d", c);
		else if (c == '\t')
		{
			
			printf("\\t:%d ",c);
		}
		else
		{
			putchar(c);
			printf(":%d ",c);
		}

	}

	return 0;
}