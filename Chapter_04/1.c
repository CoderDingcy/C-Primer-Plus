#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char fname[20];
	char lname[20];
	printf("first name��");
	scanf("%s",fname);

	printf("last name��");
	scanf("%s",lname);

	printf("Hello! %s,%s",fname,lname);


	return 0;
}