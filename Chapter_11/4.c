#include<stdio.h>
#include<ctype.h>
#include<string.h>

void inPut(char arr[],int n)
{
    printf("Please enter some characters(EOF to quit),can read up to %d characters:\n",n);
    int i=0,j=0;
    char ch;
while((ch=getchar())!=EOF&&j<n)
    {
    j++;
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
    inPut(arr,10);
    if(strlen(arr))
    {
    printf("result:");
    puts(arr);
    }
        return 0;
}