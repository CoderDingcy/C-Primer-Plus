#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>

int is_alpha()
{
	char ch;
	printf("Please enter a charcter:");
	while ((ch=getchar())!=EOF)
	{
		while (getchar() != '\n')
			continue;
		if (isalpha(ch) && ch <= 90)
			printf("%c:%d\n", ch, ch - 64);
		else if (isalpha(ch) && ch > 90)
			printf("%c:%d\n", ch, ch - 96);
		else
			printf("%c is not a letter.\n", ch);
		printf("You can enter again:");
    }
	printf("Done.");
}

int main()
{
	is_alpha();

	return 0;
}