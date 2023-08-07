#include<stdio.h>
#include "pel2-2a.h"
static int mode;
static double distance;
static double consume;
void set_mode(int num)
{
    mode = num;
}

void get_info()
{
    switch (mode)
    {
    case 0:
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters:");
        scanf("%lf", &consume);
        break;
    }

    case 1:
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf", &consume);

        break;
    }
    case -1:
        break;
    default:
    {
        printf("Invalid mode specified.Mode 1(US) used.\n");
        printf("Enter distance traveled in miles:");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf", &consume);
        break;
    }
    }
}

void show_info()
{
    switch (mode)
    {
    case 0:
    {
        printf("Fuel consumption is %lg liters per 100 km.\n", (100 * consume) / distance);
        break;
    }
    case 1:
    {
        printf("Fuel consumption is %lg miles per gallon.\n", distance / consume);
        break;
    }
    case -1:
        break;
    default:
    {
        printf("Fuel consumption is %lg liters per 100 km.\n", distance / consume);
        break;
    }
    }
}