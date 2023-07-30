#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{

    double income,tax;
    int type;
    while (1)
    {
        printf("********************************\n");
        printf("1) single\n");
        printf("2) householder\n");
        printf("3) married\n");
        printf("4) married but divorced\n");
        printf("5) quit\n");
        printf("********************************\n");
        printf("Please you choose: ");
        while (scanf("%d", &type) != 1 || (type > 5 && type < 1))
        {
            while (getchar() != '\n')
                continue;
            printf("Please enter 1-5:");
        };
        if (type == 5)
            break;
        printf("Please enter wage:");
        while (scanf("%lf", &income) != 1 || income < 0)
        {
            while (getchar() != '\n')
                continue;
            printf("Please enter again:");
        }
        switch (type)
        {
        case 1:
            tax = income > 17850 ? ((17850 * 0.15) + 0.28 * (income - 17850)) : (income * 0.15);
            break;
        case 2:
            tax = income > 23900 ? ((23900 * 0.15) + 0.28 * (income - 23900)) : (income * 0.15);
            break;
        case 3:
            tax = income > 29750 ? ((29750 * 0.15) + 0.28 * (income - 29750)) : (income * 0.15);
            break;
        case 4:
            tax = income > 14875 ? ((14875 * 0.15) + 0.28 * (income - 14875)) : (income * 0.15);
            break;
    
        }
        printf("Your tax:%lg\n", tax);

    }
    printf("Done.");

	return 0;
}