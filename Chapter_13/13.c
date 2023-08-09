#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ROWS 20
#define COLS 30
#define LEN 256
#define LEVELS 10
const char trans[LEVELS + 1] = " .':~*=&%%#";
void change(int rows, int cols, int (*num)[cols], char (*picture)[cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            picture[i][j] = trans[num[i][j]];
        }
    }
}

int main()
{
    int num[ROWS][COLS];
    char picture[ROWS][COLS];
    char filename[LEN];
    FILE *fb;
    int ch;
    printf("Please enter the file name:\n");
    scanf("%s", filename);
    fb = fopen(filename, "r+");
    if (fb == NULL)
    {
        fprintf(stderr, "Can't open.");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            fscanf(fb, "%d", &num[i][j]);
    }

    if (ferror(fb))
    {
        fprintf(stderr, "Error getting data from file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    change(ROWS,COLS,num, picture);
    printf("File %s have been transformed pictures:\n", filename);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            putchar(picture[i][j]);
        }
        putchar('\n');
    }
    fseek(fb, 0, SEEK_END);
    putc('\n', fb);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            putc(picture[i][j], fb);
        }
        putc('\n', fb);
    }
    if (fclose(fb))
    {
        fprintf(stderr, "Can't close ");
        exit(EXIT_FAILURE);
    }
    return 0;
}