#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef unsigned long ulong;
static ulong ft = 0x00001180;
const char *state[4] = {"off", "on"};
const char *alignment[7] = {"left", "center", "right"};

void eatline();
int get_first();
int get_choice();
void change_font();
void change_size();
void change_alignment();
void change_toggle(int ch);
int main()
{
    int ch;
    while ((ch = get_choice()) != 'q')
    {
        switch (ch)
        {
        case 'f':
        {
            change_font();
            break;
        }
        case 's':
        {
            change_size();
            break;
        }
        case 'a':
        {
            change_alignment();
            break;
        }
        case 'b':
        case 'i':
        case 'u':
        {
            change_toggle(ch);
            break;
        }
        }
        putchar('\n');
    }
    printf("Bye!\n");

    return 0;
}

void eatline()
{
    while (getchar() != '\n')
        continue;
}

int get_first()
{
    int ch;
    do
    {
        ch = getchar();
    } while (isspace(ch));

    eatline();
    return ch;
}

int get_choice()
{
    int ch;
    printf("ID    SIZE    ALIGNMENT      B       I       U\n");
    printf("%-7u%-9u%-12s", (ft >> 12) & 0XFF, (ft >> 5) & 0x7F, alignment[(ft >> 3) & 0x03]);
    printf("%-8s%-8s%-8s\n", state[(ft >> 2) & 1], state[(ft >> 1) & 1], state[ft & 1]);
    printf("f) change font        s) change size        a) change alignment\n");
    printf("b) toggle bold        i) toggle italic      u) toggle underline\n");
    printf("q) quit\n");
    while (ch = get_first(), NULL == strchr("fsaibuq", ch))
    {
        printf("Please enter with f, s, a, b, i, u or q: ");
    }
    return ch;
}

void change_font()
{

    int ch;
    ulong id;

    printf("Enter font id (0-255): ");
    while (scanf("%lu", &id) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is not a id.\n");
        printf("Please enter a number such as 0, 5 or 255: ");
    }
    id &= 0xFF;
    id <<= 12;
    for (int i = 12; i < 20; i++)
    {
        ft &= ~(ulong)(1 << i);
    }
    ft |= id;
}

void change_size()
{
    int ch;
    ulong size;
    printf("Enter font sz (0-127): ");
    while (scanf("%lu", &size) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a size.\n");
        printf("Please enter a number such as 0, 5 or 127: ");
    }
    size &= 0x7F, size <<= 5;
    for (int i = 5; i < 12; i++)
    {
        ft &= ~(ulong)(1 << i);
    }
    ft |= size;
}

void change_alignment()
{
    int ch;

    printf("Select alignment:\n");
    printf("l) left    c) center    r) right\n");
    while (ch = get_first(), NULL == strchr("lcr", ch))
    {
        printf("Please enter with l, c or r: ");
    }
    ft &= ~(ulong)(1 << 3), ft &= ~(ulong)(1 << 4);
    ft = ft | (ch == 'c' ? (ulong)(1 << 3) : ch == 'r' ? (ulong)(1 << 4): 0);
}

void change_toggle(int ch)
{
    if (ch == 'b')
    {
        if (ft & 0x04)
        {
            ft &= ~(ulong)(0x04);
        }
        else
        {
            ft |= (ulong)(0x04);
        }
    }
    else if (ch == 'i')
    {
        if (ft & 0x02)
        {
            ft &= ~(ulong)(0x02);
        }
        else
        {
            ft |= (ulong)(0x02);
        }
    }
    else
    {
        if (ft & 0x01)
        {
            ft &= ~(ulong)(0x01);
        }
        else
        {
            ft |= (ulong)(0x01);
        }
    }
}
