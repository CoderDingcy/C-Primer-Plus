#include<stdio.h>
#include<string.h>
#include<ctype.h>

int words(char* str)
{
    int len=strlen(str),inword=0,words=0;
for(int i=0;i<len;i++)
{
    if(isalpha(*(str+i))&&inword==0)
    {
        words++;
        inword=1;
    }
    else if(isspace(*(str+i))&&inword==1)
    {
        inword=0;
    }
}
return words;
}

void report(char* str)
{
    int len=strlen(str);
    int ws=0,up=0,low=0,puct=0,numbers=0;   
    for(int i=0;i<len;i++)
    {
    if(isalpha(*(str+i))&&*(str+i)<=90)
    {
    up++;
    }
    else if(isalpha(*(str+i))&&*(str+i)>90)
    {
        low++;
    }
    else if(ispunct(*(str+i)))
    {
        puct++;
    }
    else if(isalnum(*(str+i))&&!isalpha(*(str+i)))
    {
    numbers++;
    }

    }
    ws=words(str);
    printf("Words:%d\nUpper letters:%d\nLower letters:%d\nPucts:%d\nNumbers:%d\n",ws,up,low,puct,numbers);

}



char* s_gets(char* str,int n)
{
    char*find,*result;
    if(result=fgets(str,n,stdin))
    {
        if(find=strchr(str,'\n'))
        {
            *find='\0';
        }
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
    char str[10];
    printf("Please enter some characters(EOF to quit):\n");
    while(s_gets(str,10)!=NULL)
    {
    report(str);
    printf("Please enter again:\n");
    }
        return 0;
}