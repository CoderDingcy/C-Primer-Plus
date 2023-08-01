#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void eatchar()
{
	while (getchar() != '\n')
		continue;
}

int main()
{
	int choice = 0;
	int high = 100, low = 1;
	printf("Please pick an integer from 1 to 100.I will try to guess.\n");
	printf("Respond with a r if my guess is right.\nRespond with a b if my guess is big\nRespond with a s if my guess is small\n");
	printf("Uh......is your number %d?\n",(high+low)/2);
	while ((choice = getchar()) != 'r')
	{
		eatchar();
		if (choice == 'b')
		{
			high = (high + low) / 2;
			printf("Well, then, is it %d?\n",(high + low) / 2);
			
		}
		else if (choice == 's')
		{
			low = (high + low) / 2;
			printf("Well, then, is it %d?\n", (high + low) / 2);
		}
		else
		{
			printf("Please enter r,b,s.\n");
		}
		
	
	}
	printf("I know i could do it!\n");

	return 0;
}