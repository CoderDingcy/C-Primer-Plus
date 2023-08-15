#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

typedef struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
} book;

char *s_gets(char *st, int n)
{
    char *result, *find;
    if (result = fgets(st, n, stdin))
    {
        if (find = strchr(st, '\n'))
        {
            *find = '\0';
        }
        else
            while (getchar() != '\n')
                continue;
    }
}

void valueSort(book *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j].value > arr[j + 1].value)
            {
                book temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void titleSort(book *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (strcmp(arr[j].title, arr[j+1].title) > 0)
            {
                book temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bookPrint(book *arr, int len)
{
    for (int index = 0; index < len; index++)
        printf("%s by %s: $%.2f\n", arr[index].title, arr[index].author, arr[index].value);
}

int main()
{
    book library[MAXBKS];
    int count = 0;
    printf("Please enter the book title.\n");
    printf("Press enter at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        bookPrint(library,count);
        putchar('\n');
        titleSort(library, count);
        bookPrint(library,count);
        putchar('\n');
        valueSort(library,count);
        bookPrint(library,count);
    }
    else
        printf("No books? Too bad.\n");

    return 0;
}