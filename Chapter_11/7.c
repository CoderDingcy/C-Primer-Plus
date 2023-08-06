#include<stdio.h>
#include<string.h>

char* mystrncpy(char* str1,char* str2,int n)
{
    int i;
    for( i=0;i<n;i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';

    return str1;
}

void eatline()
{
    while(getchar()!='\n')
    continue;
    return;
}

char* s_gets(char* str,int n)
{
    char*pos,*result;

    if(result=fgets(str,n+1,stdin))
    {
        if(pos=strchr(str,'\n'))
        *pos='\0';
        else
        eatline();
    }
    return result;
}

int main()
{
    printf("Please enter a source string(EOF to quit):\n");
    char source[40],target[40];
    char ch;
    while(s_gets(source,10)!=NULL)
    {
    printf("String:%s\n",source);
    mystrncpy(target,source,10);
    printf("Copy string:%s\n",target);

    printf("You can enter a string again:\n");
    }
    printf("Done.");
    return 0;
}