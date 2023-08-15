#include <stdio.h>
#define LEN 12
#define CSIZE 4

typedef struct name
{
    char fname[LEN];
    char lname[LEN];
} name;

typedef struct student
{
    name ne;
    double grade[3];
    double average;
} student;

void functionD(student *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Please enter three scores for %s %s:\n", arr[i].ne.fname, arr[i].ne.lname);
        for (int j = 0; j < 3; j++)
        {
            while (scanf("%lf", &arr[i].grade[j]) != 1)
            {
                while (getchar() != '\n')
                    continue;
            }
        }
    }
}

void functionE(student *arr, int len)
{
    double sum;
    for (int i = 0; i < len; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i].grade[j];
        }
        arr[i].average = sum / 3.0;
    }
}

void functionF(student *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("name:%s %s  average grade:%lg\n", arr[i].ne.fname, arr[i].ne.lname, arr[i].average);
        printf("grades:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%lg\n", arr[i].grade[j]);
        }
    }
}

void functionG(student *arr, int len)
{
    double sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i].average;
    }
    printf("Class average:%lg", sum / len);
}

int main()
{
    student stus[CSIZE] =
        {
            {"Flip", "Snide"},
            {"Clare", "Voyans"},
            {"Bingo", "Higgs"},
            {"Fawn", "Hunter"}
        };
    functionD(stus, CSIZE);
    functionE(stus, CSIZE);
    functionF(stus, CSIZE);
    functionG(stus, CSIZE);

    return 0;
}