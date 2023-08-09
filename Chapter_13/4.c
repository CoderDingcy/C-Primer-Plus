#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f[argc - 1];
    int ch;
    if (argc == 1)
    {
        fprintf(stderr, "Usage: %s filename[s]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < argc - 1; i++)
    {
        if ((f[i] = fopen(argv[i + 1], "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s\n", argv[i + 1]);
            continue;
        }
        printf("%s:\n", argv[i + 1]);
        while ((ch = getc(f[i])) != EOF)
        {
            putchar(ch);
        }
        putchar('\n');
        if (fclose(f[i]) != 0)
            fprintf(stderr, "Can't close file %s\n", argv[i + 1]);
    }

    return 0;
}