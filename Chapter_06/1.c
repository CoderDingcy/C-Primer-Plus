#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[26];

	for(int i = 97; i <= 122; i++)
	{
		arr[i - 97] = i;
	}
	for(int i=0;i<26;i++)
		printf("%c ", arr[i]);

	return 0;
}