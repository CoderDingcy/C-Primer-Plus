#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define LEN 30
#define PICK 6

void random_pick(int arr[], int length, int picks);
int main()
{
    int i, ch;
    int choices[LEN];

    for (i = 0; i < LEN; i++)
    {
        choices[i] = i + 1;
    }
    do
    {
        random_pick(choices, LEN, PICK);
        printf("Can you do again (y/n)? ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
    } while ('y' == ch || 'Y' == ch);
    puts("Done.");

    return 0;
}

void random_pick(int arr[], int length, int picks)
{
    int brr[length];
    int i, count;
    memcpy(brr, arr, sizeof(int) * length);
    srand((unsigned int)time(NULL));
    printf("Pick %d numbers:\n", picks);
    while (picks > 0)
    {
        i = rand() % length;
        if (brr[i] == 0)
            continue;
        else
        {
            picks--;
            printf("%d ", brr[i]);
            brr[i] = 0;
        }
        if (++count % 10 == 0)
            putchar('\n');
    }
    putchar('\n');
}