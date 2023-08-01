#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>

int main()
{
	int ch;
	int sum1 = 0,sum2=0,sum3=0;
	printf("Please enter some characters:\n");
	while ((ch = getchar() )!= EOF)
	{
		if (isupper(ch))
			sum1++;
		else if (islower(ch))
			sum2++;
		else
			sum3++;

	}
	printf("Uppercase letters:%d\nLowercase letters:%d\nOthers:%d", sum1, sum2,sum3);
	return 0;
}