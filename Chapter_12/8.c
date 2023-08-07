#include <stdio.h>
#include<stdlib.h>

int *make_array(int size, int elem)
{
    int *ptr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        ptr[i] = elem;
    }
    return ptr;
}

void show_array(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
        if ((i + 1) % 8 == 0)
            putchar('\n');
    }
    putchar('\n');
}
int main()
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value:");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");
    return 0;
}