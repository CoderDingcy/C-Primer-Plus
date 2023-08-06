#include<stdio.h>
#include<string.h>

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

void reverse(char* str,int len)
{
for(int i=0,j=len-1;i<j;i++,j--)
{
    char temp;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
}

int main()
{
    char str[40];
    printf("Please enter s string:\n");
    while(s_gets(str,10)!=NULL)
    {
    printf("String:%s\n",str);
    reverse(str,10);
    printf("Reverse string:%s\n",str);

    printf("Please enter again:\n");
    }    
    return 0;
}