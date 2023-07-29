#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int compute(int num1, int num2)
{
	int sum = 0;
	for (int i = num1; i <= num2; i++)
		sum = sum + i * i;
	return sum;

}

int main()
{
	int upper, lower;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d", &lower, &upper);
	while (lower <= upper)
	{
		printf("The sums of the squares from %d to %d is %d\n", lower, upper, compute(lower, upper));
		printf("Enter next set of limits:");
		scanf("%d%d", &lower, &upper);
	}
	printf("Done");
	return 0;
}