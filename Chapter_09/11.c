#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

unsigned long Fibonacci(unsigned int pos)
{
	int pre=1;
	int p = 1,temp;
	for(int i=0;i<pos-2;i++)
	{
		temp = p;
		p = p + pre;
		pre = temp;
	}
	return p;
}

int main()
{

	printf("%d", Fibonacci(7));
	return 0;
}