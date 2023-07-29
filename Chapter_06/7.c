#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char word[20];

	printf("Please enter a word:");
	scanf("%s",word);

	for (int i = strlen(word); i >= 0; i--)
		printf("%c", word[i]);


	return 0;
}