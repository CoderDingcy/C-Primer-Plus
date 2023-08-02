#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void to_base_n(int num,int n)
{
	int r;
	r = num % n;
	if (num>=n)
	{
		to_base_n((num/n), n);
	}
	printf("%d", r);
}

int main()
{
	to_base_n(8, 2);

	return 0;
}