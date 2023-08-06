#include<stdio.h>
#include<ctype.h>
#include<string.h>

void inPut(char arr[])
{
    printf("Please enter some characters(EOF to quit):\n");
    int i=0;
    char ch;
while((ch=getchar())!=EOF)
    {

    if(isspace(ch))
    {
continue;
    }   
    arr[i]=ch;
    i++;
    }
    arr[i]='\0';
}

int main()
{
    char arr[40];
    inPut(arr);
    if(strlen(arr))
    {
    printf("result:");
    puts(arr);
    }
        return 0;
}