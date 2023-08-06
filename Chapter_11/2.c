#include<stdio.h>
#include<ctype.h>

void storeArr(char arr[],int n)
{
    printf("Please enter %d characters:\n",n);
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=getchar();
        if(isspace(arr[i]))
        {
        break;
        }
    }
    arr[i]='\0';
}

int main()
{
    char string[40];
    char ch;
    storeArr(string,10);
    puts(string);

    return 0;
}