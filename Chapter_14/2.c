#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define LEN 12
typedef struct month
{
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
} month;

struct month months[LEN] =
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

void isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 100 == 0)
        months[1].days = 29;
    return;
}

int daysTotal(char *monthName, int day)
{
    int i = 1, daysT = 0;
    int temp = atoi(monthName);
    if (day < 0 || day > 31)
        return -1;
    if (temp == 0)
    {
        monthName[0] = toupper(monthName[0]);
        while (monthName[i] != '\0')
        {
            monthName[i] = tolower(monthName[i]);

            i++;
        }
    }
    for (int j = 0; j < 12; j++)
    {
        if (((temp == months[j].monumb) || (strcmp(monthName, months[j].name) == 0) ||
             (strcmp(monthName, months[j].abbrev) == 0)))
        {
            if (day > months[j].days)
                return -1;
            else
            {

                return daysT + day;
            }
        }
        else
        {
            daysT = daysT + months[j].days;
        }
    }
}

int main()
{
    int year, day;
    char month[LEN];

    printf("Please enter year month and day(q to quit):\n");
    while (scanf("%d %s %d", &year, month, &day) == 3)
    {
        isLeapYear(year);
        if (daysTotal(month, day) != -1)
            printf("The total number of days in %d to %s%dth:%d\n", year, month, day, daysTotal(month, day));
        else
            printf("You entered invalid datas!\n");
        months[1].days = 28;
        printf("You can enter again:\n");
    }

    return 0;
}