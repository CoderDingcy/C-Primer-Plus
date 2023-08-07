#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num;
    char **p;
    char temp[255];
    printf("How many words do you wish to enter?");
    scanf("%d", &num);
    if ((p = (char **)malloc(num * sizeof(char *))) != NULL)
    {
        printf("Enter %d words now:\n", num);
        for (int i = 0; i < num; i++)
        {
            scanf("%s", temp);
            int len = strlen(temp) + 1;
            p[i] = (char *)malloc(len * sizeof(char));
            if (p[i] == NULL)
            {
                printf("Memory allocation failed!\n");
                exit(EXIT_FAILURE);
            }
            strcpy(p[i], temp);
        }
        printf("Here are your words:\n");
        for (int i = 0; i < num; i++)
        {
            puts(p[i]);
            free(p[i]);
            p[i] = NULL;
        }
        free(p);
        p = NULL;
    }
    else
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}