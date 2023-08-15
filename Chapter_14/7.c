#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
#define CONTINUE 0
#define DONE 1
typedef struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
} book;
typedef struct pack
{
    book books;
    bool canceled;
} pack;
char *s_gets(char *str, int n);
int getFirst(char *str);
int getBook(pack *pk);
void update( pack *pk);
void eatline();

int main()
{
    pack library[MAXBKS];
    int count = 0;
    int deleted = 0;
    int index, filecount, open;
    FILE *pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.txt", "a+b")) == NULL)
    {
        fputs("Can't open book.txt file\n", stderr);
        exit(1);
    }

    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
        {
            puts("Current contents of book.txt:");
        }
        printf("%s by %s: $%.2f\n", library[count].books.title, library[count].books.author, library[count].books.value);
        printf("Do you want to change or delete this entry(y/n)?\n");
        printf("Please you enter to choose.\n");

        if (getFirst("yn") == 'y')
        {
            printf("Enter c to change, d to delete entry: ");
            if (getFirst("cd") == 'd')
            {
                library[count].canceled = true; // 作为删除的标记;
                deleted++;
                puts("Flag marked for deletion(The space for the next book).");
            }
            else
            {
                update(&library[count]); // 修改原书籍的内容;
            }
        }

        count++;
    }
    if (fclose(pbooks) != 0)
    {
        fprintf(stderr, "Error in closing file.\n");
    }
    filecount = count - deleted;
    if (count == MAXBKS)
    {
        fputs("The book.txt file is full.", stderr);
        exit(EXIT_FAILURE);
    }

    if (deleted > 0)
    {
        printf("If you delete some books, you should enter books to replace.\n");
    }
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    open = 0;
    while (filecount < MAXBKS)
    {
        if (filecount < count)
        {
            while (library[open].canceled == false)
            {
                open++;
            }
            if (getBook(&library[open]) == DONE)
            {
                break;
            }
        }
        else if (getBook(&library[filecount]) == DONE)
        {
            break;
        }
        filecount++;
        if (filecount < MAXBKS)
        {
            printf("Enter the next title.");
        }
    }
    puts("Here is the list of your books:");
    for (index = 0; index < filecount; index++)
    {
        if (library[index].canceled == false)
        {
            printf("%s by %s: $%.2f\n", library[index].books.title,
                   library[index].books.author, library[index].books.value);
        }
    }
    if ((pbooks = fopen("book.txt", "wb")) == NULL)
    {
        fputs("Can't open book.txt file for output.\n", stderr);
        exit(EXIT_FAILURE);
    }
    for (index = 0; index < filecount; index++)
    {
        if (library[index].canceled == false)
        {
            fwrite(&(library[index].books), size, 1, pbooks); // 直接修改原文本内容;
        }
    }
    if (fclose(pbooks) != 0)
    {
        fprintf(stderr, "Error in closing file.\n");
    }
    puts("Bye.\n");

    return 0;
}

char *s_gets(char *str, int n)
{
    char *result, *find;
    result = fgets(str, n, stdin);
    if (result)
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

void eatline()
{
    while (getchar() != '\n')
    {
        continue;
    }
}

int getFirst(char *str)
{
    int ch;
    ch = tolower(getchar());
    while (strchr(str, ch) == NULL)
    {
        printf("Invalid data! Please enter again: ");
        eatline();
        ch = tolower(getchar());
    }
    eatline();
    return ch;
}

int getBook(pack *pk)
{
    int stauts = CONTINUE;
    if (s_gets(pk->books.title, MAXTITL) == NULL || pk->books.title[0] == '\0')
    {
        stauts = DONE;
    }
    else
    {
        printf("Now enter the author: ");
        s_gets(pk->books.author, MAXAUTL);
        printf("Now enter the value: ");
        while (scanf("%f", &pk->books.value) != 1)
        {
            eatline();
            puts("Please enter a valid value: ");
        }
        pk->canceled = false;
        eatline();
    }
    return stauts;
}

void update(pack *pk)
{
    book temp = pk->books;
    int ch;
    puts("============================================");
    puts("t) modify title a) modify author");
    puts("v) modify value s) quit and save changes");
    puts("q) quit and ignore changes");
    puts("============================================");
    printf("Please you enter to choose: ");
    while ((ch = getFirst("tavsq")) != 'q' && ch != 's')
    {
        switch (ch)
        {
        case 't':
        {
            printf("Please enter the new title:\n");
            s_gets(temp.title, MAXTITL);
            break;
        }
        case 'a':
        {
            printf("Please enter the new author:\n");
            s_gets(temp.author, MAXAUTL);
            break;
        }
        case 'v':
        {
            printf("Please enter the new value:\n");
            scanf("%f", &temp.value);
            break;
        }
        }
    }
    if (ch == 's')
    {
        pk->books = temp;
    }
}
