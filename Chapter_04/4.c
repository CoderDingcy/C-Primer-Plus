#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	float height;
	char name[20];
	printf("how tall you are(inch):");
	scanf("%f", &height);
	printf("enter your name:");
	scanf("%s",name);

	printf("%s,you are %.3f feet tall", name, height/12);
	return 0;
}