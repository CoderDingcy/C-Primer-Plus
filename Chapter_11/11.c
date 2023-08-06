#include<stdio.h>
#include<ctype.h>
#include<string.h>

int getFirst()
{
    int ch;
    do
    {
        ch = tolower(getchar());
    } while (isspace(ch));

    while (getchar() != '\n')
        continue;
    return ch;

}

int showMenu()
{
    int ch;
    printf("+-------------------------------------------------------+\n");
    printf("|a) print for the origin          b) print for the ASCII|\n");
    printf("|c) print for the length          d) print for the words|\n");
    printf("|q) quit                                                |\n");
    printf("+-------------------------------------------------------+\n");
    printf("Please you choose: \n");
    ch = getFirst();
    while (ch < 'a' || ch>'d' && ch != 'q')
    {
        printf("Please enter a,b,c,d,q:\n");
        ch = getFirst();
    }
    return ch;
}

char* s_gets(char* str, int n)
{
    char* result, * find;
    if (result = fgets(str, n, stdin))
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return result;
}

int inputTen(char (*strings)[10],int n,char** str)
{
    int i;

    for ( i = 0; i < n; i++)
    {
        if (s_gets(strings[i],10) != NULL)
        {
            str[i] = strings[i];
        }
        else
        {
            break;
        }
    }
    return i;

}

void sourcePrint(int n, char (*str)[10])
{
    printf("Source strings:\n");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
}

void ascllPrint(int n, char **str)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                char* temp;
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Ascll strings:\n");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');


}

void lengthPrint(int n, char** str)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strlen(str[j]) > strlen(str[j + 1]))
            {
                char* temp;
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Length strings:\n");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');

}

int word(char* str)
{
    int inword = 0, length = 0, i = 0;
    while (*str)
    {
        if (!isspace(*(str + i)) && inword == 0)
        {
            inword = 1;
            length++;
        }
        else if (!isspace(*(str + i)) && inword)
            length++;
        else if (isspace(*(str + i)) && inword)
            break;
    }
    return length;
}

void wordlengthSort(int n, char** str)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (word(str[j]) > word(str[j + 1]))
            {
                char* temp;
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Word length strings:\n");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
}

int main()
{
    int ch, i;
    char strings[10][10];
    char* str[10];
    printf("Please enter %d strings (EOF to quit):\n", 10);
    if ((i = inputTen(strings,10,str)) != 0)
    {
        while ((ch = showMenu()) != 'q')
        {
            switch (ch)
            {
            case 'a':
            {
                sourcePrint(10,strings);
                break;
            }
            case 'b':
            {
                ascllPrint(10, str);
                break;
            }
            case 'c':
            {
                lengthPrint(10,str);
                break;
            }
            case 'd':
            {
                wordlengthSort(10,str);
                break;
            }

            }
        }

    }
    printf("Done.");
    return 0;
}