#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num;
	int even=0,  odd=0,sum_even=0,sum_odd=0;
	double avg_even = 0.0, avg_odd = 0.0;
	printf("Please enter a number(0 to quit):");
		while (scanf("%d",&num)==1&&num)
		{
			if (num == 0)
				break;
			else if (num % 2 == 0)
			{
				even++;
				sum_even = sum_even + num;
				avg_even = sum_even / even;
		
			}
			else  
			{
				
				odd++;
				sum_odd = sum_odd + num;
				avg_odd = sum_odd / odd;
		
			}
			printf("You can enter a number again(0 to quit):");

	}
		printf("Even number:%d\nEven average:%lg\nOdd number:%d\nOdd average:%lg", even, avg_even, odd, avg_odd);
	return 0;
}