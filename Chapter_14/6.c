#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define LEN 19

typedef struct player
{
    int pnum;
    char firstname[LEN];
    char lastname[LEN];
    int pre;
    int hits;
    int walk;
    int RIB;
    double rate;
} player;

int readData(FILE *fp, player arr[], int len)
{
    int id, pre, hits, walk, RIB;
    char firstname[LEN];
    char lastname[LEN];
    int count = 0;
    while (count < len && (fscanf(fp, "%d %s %s %d %d %d %d", &id, firstname, lastname, &pre, &hits, &walk, &RIB) == 7) && !feof(fp))
    {
        if (arr[id].pre == 0)//c语言中会将静态变量和全局变量默认初始化为0
            count++;
        arr[id].pnum = id;
        arr[id].hits += hits;
        arr[id].walk += walk;
        arr[id].RIB += RIB;
        strcpy(arr[id].firstname, firstname);
        strcpy(arr[id].lastname, lastname);
        arr[id].pre += pre;
    }
    return count;
}
static player players[LEN];

void hitRate(player arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i].rate = arr[i].hits * 1.0 / arr[i].pre;
    }
}

void showMessages(player players[], int len)
{
    if (0 == len)
    {
        printf("No datas!\n");
        return;
    }
    printf("Datas for all players:\n");
    printf("Id   First_name   Last_name   Stage   Hit_rate   Base_num   RBI   Hit_rate\n");
    for (int i = 0; i < len; i++)
    {
        if (players[i].pre)
        {
            printf("%-4d %-12s %-10s %5d %7d %11d %8d %8.2f\n",
                   players[i].pnum, players[i].firstname, players[i].lastname,
                   players[i].pre, players[i].hits, players[i].walk,
                   players[i].RIB, players[i].rate);
        }
    }
}

int main()
{
    FILE *fp;
    char filename[LEN];
    printf("Please enter the file name:\n");
    scanf("%s", filename);
    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s", filename);
        exit(EXIT_FAILURE);
    }
    int len = readData(fp, players, LEN);
    hitRate(players, len);
    showMessages(players, len);
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Can't close the file.\n");
    }
    return 0;
}