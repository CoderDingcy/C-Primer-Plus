#include <stdio.h>
#include <stdlib.h>

int main()
{
    char file_name[40];
    FILE *fb;
    int ch;
    unsigned long count = 0;

    printf("Please enter the file name:\n");
    fscanf(stdin, "%s", file_name);
    if ((fb = fopen(file_name, "r")) == NULL)
    {
        printf("Can't open %s.\n", file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fb)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    putchar('\n');
    fclose(fb);
    printf("File %s has %lu characters.\n", file_name, count);
    return 0;
}