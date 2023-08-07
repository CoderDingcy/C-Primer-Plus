#include <stdio.h>
#include "pel2-3a.h"

int main()
{
    int mode,temp;
    double distance,consume;

    printf("Enter 0 for metric mode,1 for US mode: ");
    scanf("%d", &mode);
    while (mode>= 0)
    {
        set_mode(&mode,&temp);
        get_info(temp,&distance,&consume);
        show_info(temp,distance,consume);
        printf("Enter 0 for metric mode,1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}