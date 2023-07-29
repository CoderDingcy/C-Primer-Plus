#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int count;
	double sum1=0, sum2=0;

	printf("Please enter the count:");
	while (true)
	{
		scanf("%d", &count);
		if (count <= 0)
			break;
		for (int i = 1; i <= count; i++)
		{
			sum1 = sum1 + (1.0 / i);
		}

		for (int i = 1; i <= count; i++)
		{
			if (i % 2 == 1)
			{
				sum2 = sum2 + (1.0 / i);
			}
			else
				sum2 = sum2 - (1.0 / i);
		}
		printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %lg\n",sum1);
		printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %lg\n",sum2);

		printf("You can enter next count:");
	}
	printf("Done");

	return 0;
}