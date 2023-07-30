#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num;

	printf("Please enter a positive number:");
	while ((scanf("%d", &num))!= 1|| num<=0)
	{
		while (getchar() != '\n')
			continue;
		printf("Please enter again(>0):");
	}
	printf("prime number:\n");
	switch (num)
	{
	case 1:
	{
		printf("1");
		break;
	}
	case 2:
	{
		printf("1\n2");
		break;
	}
	default:
	{
		printf("1\n2\n");
		for (int i = 3; i <= num; i++)
		{
			int count = 0;
			for (int j = 2; j < i; j++)
			{
				if (i %j != 0)
					count++;
			}
			if (i == (count + 2))
				printf("%d\n", i);
			
		}
		break; 
	}
	}


	return 0;
}