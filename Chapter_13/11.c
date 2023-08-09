#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 256

int main(int argc, char *argv[])
{
    char info[LEN];
    FILE *fb;
    if (argc < 3)
    {
        fprintf(stderr, "Usage: str filename.\n");
        exit(EXIT_FAILURE);
    }
    if ((fb = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open this file.");
        exit(EXIT_FAILURE);
    }
    while (fgets(info, LEN, fb) != NULL)
    {
        if (strstr(info, argv[1]))
        {
            fputs(info, stdout);
        }
        else
            continue;
    }
    if (fclose(fb))
    {
        fprintf(stderr, "Can't close the file.\n");
    }
    return 0;
}