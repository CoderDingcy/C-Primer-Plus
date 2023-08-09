#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main()
{
    FILE *fp;
    char words[MAX];
    int count = 0;
    if ((fp = fopen("1.txt", "a+")) == NULL)
    {
        fprintf(stderr, "Can't openn the file.\n");
        exit(EXIT_FAILURE);
    }
    while (fgets(words, MAX, fp) != NULL)
    {
        count++;
    }
    puts("Enter words to add to the file. press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%s", words) == 1) && words[0] != '#')
    {
        fprintf(fp, "%d:%s\n", ++count, words);
    }

    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
    {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    return 0;
}