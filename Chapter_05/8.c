#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int num1=1, num2=1;
	printf("This program computes moduli.\n");
	
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &num2);

	printf("Now enter the first operand:");
	scanf("%d", &num1);
	printf("%d %% %d is %d\n", num1, num2, num1 % num2);
	while (num1 > 0 )
	{
		
		printf("Enter next number for the first operand (<= 0 to quit):");
		scanf("%d", &num1);
		printf("%d %% %d is %d\n", num1, num2, num1 % num2);


	}

	return 0;
}