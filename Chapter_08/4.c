#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main()
{
	int ch;
	bool inword=false;
	int words = 0,i=0;
	double word_avg;
	printf("Please enter some words(EOF to quit):\n");
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			inword = true;
			i++;
		 }
		else if (!isalpha(ch) && (inword == true))
		{
			words++;
			inword = false;
		}
		
	}
	word_avg =(double)i / words;
	printf("Average number of letters per word:%lg",word_avg);

	return 0;
}