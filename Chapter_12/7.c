#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sets, sides, dice;
    srand((unsigned int)time(0));
    printf("Enter the number of sets; enter q to stop :");
    while (scanf("%d", &sets) == 1 && sets != 'q')
    {
        printf("How many sides and how many dice?");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sides throws.\n", sets, dice, sides);
        int arr[dice];
        for (int i = 0; i < sets; i++)
        {
            int sum = 0;
            for (int i = 0; i < dice; i++)
            {
                arr[i] = rand() % sides + 1;
            }
            for (int i = 0; i < dice; i++)
            {

                sum += arr[i];
            }
            printf("%d ", sum);
        }
        putchar('\n');
        printf("How many sets?Enter q to stop:");
    }
    printf("Done.");
    return 0;
}