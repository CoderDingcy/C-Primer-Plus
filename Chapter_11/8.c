#include<stdio.h>
#include<string.h>

char* string_in(char* str1,char* str2)
{
    char* result;
    if(result=strstr(str1,str2))
    return result;
    else
    return NULL;
}

void eatline()
{
    while(getchar()!='\n')
    continue;
}
char* s_gets(char* str,int n)
{
    char* result;
    char* ch;
if(result=fgets(str,n+1,stdin))
{
    if(ch=strchr(str,'\n'))
    *ch='\0';
    else
    eatline();

}
return result;
}


int main()
{
    printf("Please enter first string(EOF to quit):\n");
    char str1[40],str2[40];
    char ch;
    while(s_gets(str1,10)!=NULL)
    {
    printf("String1:%s\n",str1);
    printf("Please enter second string(EOF to quit):\n");
    if(s_gets(str2,3)!=NULL)
    {
        printf("String2:%s\n",str2);
        if(string_in(str1,str2))
        {
            printf("%s in  string %s .\n",str2,string_in(str1,str2));
        }
        else
            printf("%s not in first string %s .\n",str2,str1);

    }
    


    printf("You can enter a string again:\n");
    }
    printf("Done.");
    return 0;
}