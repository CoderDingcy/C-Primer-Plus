#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *fb;
    char file_name[256];
    char ch;
    printf("Please enter the file name:\n");
    scanf(" %s", file_name);
    if ((fb = fopen(file_name, "r+")) == NULL)
    {
        printf("Can't open %s.\n", file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fb)) != EOF)
    {
        fseek(fb, -1L, SEEK_CUR);
        putc(toupper(ch), fb);
        fseek(fb, 0L, SEEK_CUR);
    }
    rewind(fb);
    printf("File %s:\n", file_name);
    while ((ch = getc(fb)) != EOF)
    {
        putchar(ch);
    }
    putchar('\n');
    if (fclose(fb) != 0)
    {
        fprintf(stderr, "Can't close %s\n", file_name);
    }
    return 0;
}