#include <stdio.h>
#include <string.h>
#define LEN 12
#define SIZE 5

typedef struct second
{
    char firstname[LEN];
    char middle[LEN];
    char lastname[LEN];
} second;

typedef struct first
{
    char num[LEN];
    second sd;

} first;

void myPrint(first *arr, int len)
{
    printf("All numbers messages:\n");
    for (int i = 0; i < len; i++)
    {
        if (arr[i].sd.middle[0] == '\0')
            printf("%s, %s -- %s\n", arr[i].sd.firstname, arr[i].sd.lastname, arr[i].num);
        else
            printf("%s, %s %c. -- %s\n", arr[i].sd.firstname, arr[i].sd.lastname, *arr[i].sd.middle, arr[i].num);
    }
}

char *s_gets(char *str, int n)
{
    char *result, *find;
    if (result = fgets(str, n, stdin))
    {
        if (find = strchr(str, '\n'))
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return result;
}

int main()
{
    int count = 0;
    first arr[SIZE];

    printf("Please enter the insurance number:\n");
    printf("Press [enter] at the start of a line to stop.\n");

    while ( count != 5 && s_gets(arr[count].num, LEN) != NULL&& arr[count].num[0] != '\0')
    {

        printf("Now enter the former name.\n");
        s_gets(arr[count].sd.firstname, LEN);
        printf("Now enter the middle name(Without, [enter] to the next).\n");
        s_gets(arr[count].sd.middle, LEN);
        printf("Now enter the last name.\n");
        s_gets(arr[count].sd.lastname, LEN);
        count++;
        if (count < 5)
        {
            printf("Enter the next insurance number:\n");
        }
    }
    if (count > 0)
    {
        myPrint(arr, count);
    }
    else
        printf("No data!\n");
    return 0;
}