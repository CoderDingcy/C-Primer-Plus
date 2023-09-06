#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define LEN 40
#define SLEN 5

struct names
{
    char first[LEN];
    char last[LEN];
};

void show_names(const struct names arr[], int n);
int comp(const void *p1, const void *p2);
int main()
{
    struct names staff[SLEN] =
        {
            {"Francy, card"},
            {"Coffee, cancy"},
            {"Stephen, lory"},
            {"Jack, rosery"},
            {"Black, clover"}};
    puts("Random list:");
    show_names(staff, SLEN);
    qsort(staff, SLEN, sizeof(struct names), comp);
    puts("\nSorted list:");
    show_names(staff, SLEN);

    return 0;
}

void show_names(const struct names arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s,%s\n", arr[i].first, arr[i].last);
    }
}

int comp(const void *p1, const void *p2)
{
    int res;
    const struct names *ps1 = (const struct names *)p1;
    const struct names *ps2 = (const struct names *)p2;
    if ((res = strcmp(ps1->first, ps2->first)) != 0)
    {
        return res;
    }
    else
    {

        return strcmp(ps1->last, ps2->last);
    }
}