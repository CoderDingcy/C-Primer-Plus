#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main()
{
    FILE *in, *out;
    char sname[LEN];
    char tname[LEN];
    int ch;
    int count = 0;
    printf("Please enter source filename:\n");
    scanf(" %s", sname);

    if ((in = fopen(sname, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s file.\n", sname);
        exit(EXIT_FAILURE);
    }
    strncpy(tname, sname, LEN - 5);
    tname[LEN - 5] = '\0';
    strcat(tname, ".red");
    if ((out = fopen(tname, "w")) == NULL)
    {
        fprintf(stderr, "Can't open %s file.\n", tname);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF)
    {
        if (++count % 3 == 1)
            putc(ch, out);
    }
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files.\n");

    return 0;
}