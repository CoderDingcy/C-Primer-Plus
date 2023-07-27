#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	
	printf("name£º");
	scanf("%s", name);



	printf("a.\"%s\"\n",name);
	printf("b.\"%20s\"\n",name);
	printf("c.\"%-20s\"\n",name);
	printf("c.\"%*s\"\n",strlen(name)+3,name);



	return 0;
}