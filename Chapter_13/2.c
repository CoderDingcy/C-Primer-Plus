#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source, *target;
    size_t num;
    char info[256];
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s sourcefile targetfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((source = fopen(argv[1], "rb")) == NULL)
    {
        printf("Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((target = fopen(argv[2], "wb")) == NULL)
    {
        printf("Can't open %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((num = fread(info, sizeof(char), 256, source)) > 0)
    {
        fwrite(info, sizeof(char), num, target);
    }

    if (fclose(source) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[1]);
    }
    if (fclose(target) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[2]);
    }

    return 0;
}