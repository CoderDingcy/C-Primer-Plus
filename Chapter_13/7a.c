#include <stdio.h>
#define LEN 256

int main()
{
    char f1[LEN];
    char f2[LEN];
    char *temp;
    FILE *F1, *F2;
    int c1, c2, i = 0;
    printf("Please enter two files name:\n");
    scanf("%s %s", f1, f2);
    if ((F1 = fopen(f1, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s file", f1);
    };
    if ((F2 = fopen(f2, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s file", f2);
    };

    while ((c1 = getc(F1)) != EOF)
    {
        putc(c1, stdout);
        if (c1 == '\n' && c2 != EOF)
        {
            while ((c2 = getc(F2)) != EOF)
            {
                putc(c2, stdout);
                if (c2 == '\n')
                    break;
            }
            if (c2 == EOF)
                putchar('\n');
        }
    }
    if (c1 == EOF)
        putchar('\n');
    while ((c2 = getc(F2)) != EOF)
    {
        putc(c2, stdout);
    }

    if (fclose(F1) != 0 && fclose(F2) != 0)
    {
        fprintf(stderr, "Can't close the file");
    };
    return 0;
}