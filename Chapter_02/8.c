#include<stdio.h>

void two()
{
	printf("two");
}

void one_three()
{
	printf("one\n");
	two();
	printf("\nthree\n");
}

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}