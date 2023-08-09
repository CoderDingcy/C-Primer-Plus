#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define LEN 46

int main()
{
    char name[LEN];
    long int num;
    int ch;
    FILE *fp;
    printf("Please enter the file name:\n");
    scanf("%s", name);
    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file.");
        exit(EXIT_FAILURE);
    }
    printf("Please enter a pos in file(<0 or not a num to quit):\n");
    while ((scanf("%ld", &num)) == 1 && num >= 0)
    {
        fseek(fp, num, SEEK_SET);
        while ((ch = getc(fp)) != '\n' && ch != EOF)
        {
            putc(ch, stdout);
        }
        if (ch == EOF)
        {
            printf("\nThis pos reaches EOF.\n");
            break;
        }
        printf("\nPlease enter a pos again:\n");
    }
    printf("Done.");
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Can't close the file.");
    }
    return 0;
}