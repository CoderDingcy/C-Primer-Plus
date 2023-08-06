#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* getPos(char* string,char ch)
{
 while(*string)
 {
    if(*string==ch)
    return string;
    else
    string++;

 }
 return NULL;
}

char* s_gets(char* s,int n)
{
    char* find,*reuslt;
    if(reuslt=fgets(s,n+1,stdin))
    {
        find=strchr(s,'\n');
        if(find)
        *find='\0';
        else
        {
            while(getchar()!='\n')
            continue;
        }
    }
    return reuslt;

}

int main()
{
    char str[40];
    char ch;
    printf("Please enter a string(EOF to quit):\n");
    while(s_gets(str,10)!=NULL)
    {
        printf("Please enter a character:\n");
        ch=getchar();
        while(getchar()!='\n')
        continue;
        printf("String:\n");
        puts(str);
        if(getPos(str,ch))
        printf("Exist %c in the string.\n",ch);
        else
        printf("Not exist %c in the string.\n",ch);
        printf("You can enter again:\n");
    }
    printf("Done.");

    return 0;
}