#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

char get_first()
{
	int ch;

	while (isspace((char)(ch=getchar())))
	{
		//
	}
	while (getchar() != '\n')
		continue;
	return ch;

}

int main()
{
	int ch;
	printf("Please enter some charactrs:");
	ch = get_first();
	printf("The first non-whitespace character:");
	putchar(ch);

	return 0;
}