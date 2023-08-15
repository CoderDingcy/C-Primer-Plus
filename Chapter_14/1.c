#include <stdio.h>
#include<string.h>
#define LEN 12
typedef struct month
{
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
} month;

const struct month months[LEN] =
    {
        {"January", "Jan", 31, 1},
        {"February", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}};

int daysTotal(char *monthName)
{
    int i = 0, daysT = 0;

    while ((strcmp(monthName, months[i].name) != 0) && i != 12)
    {
        daysT = daysT + months[i].days;
        i++;
    }
    if (i == 12)
        return -1;
    else
        return daysT;
}

int main()
{
printf("The total number of days in a year through September:%d\n",daysTotal("September"));
    return 0;
}