#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char fname[20];
	char lname[20];
	printf("Please enter your first name:");
	scanf("%s", fname);
	printf("Please enter your last name:");
	scanf("%s",lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	return 0;
}