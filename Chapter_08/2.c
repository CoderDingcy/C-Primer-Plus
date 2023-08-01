#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int ch;
	int i = 0;
	printf("Please enter some characters:\n");
	while ((ch = getchar()) != EOF)
	{
		if (i++==10)
		{
			putchar('\n');
	    }
		else if (ch == '\n')
		{
			printf(" \\n - \\n\n ");
		}
		else if (ch == '\t')
		{
			printf(" \\t - \\t ");
		}
		else if (ch >= 32)
		{
			printf(" \'%c\' - %3d ", ch, ch);
		}
		else
		{
			printf(" \'%c\' - ^%c ",ch,ch+64);
		}
	}

	printf("Done.");

	return 0;
}