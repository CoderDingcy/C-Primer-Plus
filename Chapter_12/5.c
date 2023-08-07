#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 100

void showArr(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void sortArr(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[LENGTH];
    int num;
    srand((unsigned int)time(0));
    for (int i = 0; i < LENGTH; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    printf("100 random numbers before sorting:\n");
    showArr(arr, LENGTH);
    printf("100 random numbers after sorting:\n");
    sortArr(arr, LENGTH);
    showArr(arr, LENGTH);
    return 0;
}