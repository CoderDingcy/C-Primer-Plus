#include <stdio.h>

int count = 0;
int hehe();
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("The number of times a function is called:%d\n", hehe());
    }
    return 0;
}

int hehe()
{

    printf("HeHe!\n");
    return ++count;
}