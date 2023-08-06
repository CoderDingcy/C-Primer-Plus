#include<stdio.h>
#include<string.h>

void deleteSpace(char* str)
{
    int len=strlen(str),i=0;
    for(int j=0;j<len;j++)
    {
        if(str[j]!=' ')
        {
            str[i++]=str[j];
        }

    }
    str[i]='\0';

}

char* s_gets(char* str,int n)
{
    char* pos,*result;
    if(result=fgets(str,n+1,stdin))
    {
        if(pos=strchr(str,'\n'))
        *pos='\0';
        else
        while(getchar()!='\n')
        continue; 

    }
    return result;
}

int main()
{
char str[40];

    printf("Please enter a string (EOF or enter to quit):\n");
    while (s_gets(str, 10) != NULL && str[0] != '\0')
    {
        printf("Source string: %s\n", str);
        deleteSpace(str);
        printf("Delete space: %s\n", str);
        printf("You can enter a string again (EOF or enter to quit):\n");
    }
    printf("Done.\n");

}