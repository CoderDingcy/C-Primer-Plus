#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char c,pre_c='#';
	int num = 0;
	printf("Please enter some characters(# to quit):");
	while ((c = getchar()) != '#')
	{
		if (c == 'i' && pre_c == 'e')
		{
			num++;
		}

		pre_c = c;
	}
	printf("ei times:%d", num);
	return 0;
}