#include <stdio.h>
#include "pel2-3a.h"

void set_mode(int* mode, int *n)
{
    if (*mode < 0)
    {
        printf("Invalid mode specified.Mode 1(US) used.\n");
    }
    else
    {
        *n = *mode;
    }
}

void get_info(int mode, double *distance, double *consume)
{
    switch (mode)
    {
    case 0:
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters:");
        scanf("%lf", consume);
        break;
    }

    case 1:
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf", consume);

        break;
    }
    case -1:
        break;
    default:
    {
        set_mode(&mode, NULL);
        printf("Enter distance traveled in miles:");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf", consume);
        break;
    }
    }
}

void show_info(int mode, double distance, double consume)
{
    switch (mode)
    {
    case 0:
    {
        printf("Fuel consumption is %lg liters per 100 km.\n", (100 * consume) / distance );
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
        printf("Fuel consumption is %lg liters per 100 km.\n", distance/ consume);
        break;
    }
    }
}