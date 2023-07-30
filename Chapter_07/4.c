#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char c;
	int num=0;
	printf("Enter some characters(# to quit):");
	while ((c=getchar())!='#')
	{
		if (c == '.')
		{
			putchar('!');
			num++;
		}
		else if (c == '!')
		{
			printf("%s", "!!");
			num++;
		}
		else
		{
			putchar(c);
		}

	}
	printf("\n");
	printf("Replace times:%d", num);
	return 0;
}