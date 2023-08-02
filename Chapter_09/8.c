#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


double compute(double num,int n)
{
	double sum = 1;
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			sum *= num;
		}
		return sum;
	}
	else if (n < 0)
	{
		for (int i = 0; i < (-n); i++)
		{
			sum *= num;
		}
		return 1 / sum;
	}
	 if(n==0)
	{
		return 1.0;
	}
	 if (num = 0)
		 return 0.0;
	

}

int main()
{
	double num,sum;
	int n;
	printf("You can enter a number and the integer power(q to quit): ");
	
	while (scanf("%lf %d", &num, &n) == 2)
	{
		sum=compute(num, n);
		while (getchar() != '\n')
			continue;
		printf("%lg to the power %d is %lg.\n", num, n, sum);
		printf("You can enter again:");
	}
	printf("Done.");
	return 0;
}