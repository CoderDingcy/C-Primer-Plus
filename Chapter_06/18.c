#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
# define Db_number 150


int main()
{
	int Ra_friend = 5;
	int week = 0;
	while (Ra_friend <= Db_number)
	{
		week++;
		
		Ra_friend = (Ra_friend - week) * 2;
		printf("Number of friends in the %d week: %d\n", week, Ra_friend);

	}

	return 0;
}