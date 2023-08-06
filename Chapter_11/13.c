// #define _CRT_SECURE_NO_WARNINGS 1
// //自写
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// void stringReverse(char* str, int len)
// {

//     for (int i = 0, j = len - 1; i < j; i++, j--)
//     {
//         char temp;
//         temp = *(str + i);
//         *(str + i) = *(str + j);
//         *(str + j) = temp;
//     }
// }

// void reverse(char* str)
// {
//     int len = strlen(str), inword = 0, wlen=1;
//     char* start=NULL;
//     stringReverse(str, len);
//     for (int i = 0; i < len; i++)
//     {

//         if (isalpha(*(str + i)) && inword == 0)
//         {
//             inword = 1;
//             start = str + i;
//         }
//         else if (isalpha(*(str + i)) && inword == 1&&i!=len-1)
//         {
//             wlen++;
//         }
//         else if (!isalpha(*(str + i)) && inword == 1)
//         {
//             inword = 0;
//             stringReverse(start, wlen);
//             wlen = 1;
//         }
//         else if (isalpha(*(str + i)) && inword == 1 && i == len - 1)
//         {
//             wlen++;
//             stringReverse(start, wlen);
//         }
//     }

// }

// char* s_gets(char* str, int n)
// {
//     char* find, * result;
//     if (result = fgets(str, n, stdin))
//     {
//         if (find = strchr(str, '\n'))
//         {
//             *find = '\0';
//         }
//         else
//         {
//             while (getchar() != '\n')
//                 continue;
//         }
//     }
//     return result;
// }

// int main()
// {
//     char str[40];
//     printf("Please enter some characters(EOF to quit):\n");
//     while (s_gets(str, 40) != NULL)
//     {
//         reverse(str);
//         puts(str);
//         printf("Please enter again:\n");
//     }
//     return 0;
// }

// 命令行
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s words\n", argv[0]);
    }
    else
    {
        printf("Words:\n");
        for (int i = 1; i < argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("\nReversing printing is:\n");
        for (int i = argc - 1; i > 0; i--)
        {
            printf("%s ", argv[i]);
        }
        putchar('\n');
    }

    return 0;
}
