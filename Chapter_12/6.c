#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(0));
    int arr[11];
    for (int j = 0; j < 10; j++)
    {

        for (int i = 0; i < 11; i++)
        {
            arr[i] = 0;
        }

        for (int i = 0; i < 1000; i++)
        {
            int num = rand() % 10 + 1;
            arr[num]++;
        }
        for(int i=1;i<11;i++)
        {
            printf("%d:%d ",i,arr[i]);
        }
        putchar('\n');
    }

    return 0;
}