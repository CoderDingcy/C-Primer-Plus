#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int ch, count;
    FILE *f[argc - 2];
    if (argc < 2)
    {
        fprintf(stderr, "Usage: char filename");
        exit(EXIT_FAILURE);
    }
    if (strlen(argv[1]) != 1)
    {
        fprintf(stderr, "The second argument must be a character!\n");
        exit(EXIT_FAILURE);
    }
    if (argc == 2)
    {
        count == 0;
        printf("Please enter some characters(EOF to quit):\n");
        while ((ch = getchar()) != EOF)
        {
            if (ch == *argv[1])
            {
                count++;
            }
        }
        printf("The number of %c in input:%d", *argv[1], count);
    }

    if (argc >= 3)
    {
        count = 0;
        for (int i = 2; i < argc; i++)
        {
            if ((f[i - 2] = fopen(argv[i], "r")) == NULL)
            {
                fprintf(stderr, "Can't open %s file.", argv[i]);
                continue;
            }
            while ((ch = getc(f[i - 2])) != EOF)
            {
                if (ch == *argv[1])
                    count++;
            }
            printf("The number of %c in %s:%d", *argv[1], argv[i], count);
            if (fclose(f[i - 2]) != 0)
            {
                fprintf(stderr, "Can't close %s file.", argv[i]);
            }
        }
    }

    return 0;
}