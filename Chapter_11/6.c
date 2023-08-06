#include<stdio.h>
#include<ctype.h>
#include<string.h>

int is_within(char ch,char* str)
{
if(strchr(str,ch))
return 1;
else
return 0;
}

char* s_gets(char* str,int n)
{
    char* find,*result;
    if(result=fgets(str,n+1,stdin))//读到文件尾或者发生错误
    {
    if(find=strchr(str,'\n'))
    *find='\0';
    else
    {
    while(getchar()!='\n')
    continue;
    }

    }
    return result;
}

int main()
{
    printf("Please enter a string(EOF to quit):\n");
    char str[40];
    char ch;
    while(s_gets(str,10)!=NULL)
    {
    printf("Please enter a character:\n");
    ch=getchar();
    while(getchar()!='\n')
    continue;
    if(is_within(ch,str))
    printf("%c exist in the string\n",ch);
    else
    printf("%c not exist in the string\n",ch);

    printf("You can enter a string again:\n");
    }
    return 0;
}