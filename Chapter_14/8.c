#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN 12
typedef struct seat
{
    int id;
    bool is_reserve;
    char firstname[LEN];
    char lastname[LEN];
} seat;
int num_empty(seat seats[], int len);
char *s_gets(char *str, int n);
void show_seats(seat pl[]);
int show_menu();
int get_char();
void eatline();
void list_empty(seat seats[], int len);
void make_list(seat seats[], char *str, int kind);
void sort(seat *seats[], int n);
void alpha_list(seat *seats[], int n);
void assign_seat(seat seats[], int n);
void delete_seat(seat seats[], int n);

int main()
{
    int ch;
    seat seats[LEN];
    seat *st[LEN];
    for (int i = 0; i < LEN; i++)
    {
        st[i] = &seats[i];
    }
    for (int i = 0; i < LEN; i++)
    {
        seats[i].is_reserve = false;
        seats[i].id = i + 1;
    }
    while ((ch = show_menu()) != 'f')
    {
        switch (ch)
        {
        case 'a':
            printf("The number of empty seats:%d\n", num_empty(seats, LEN));
            break;
        case 'b':
            list_empty(seats, LEN);
            break;
        case 'c':
            alpha_list(st, LEN);
            break;
        case 'd':
            assign_seat(seats, LEN);
            break;
        case 'e':
            delete_seat(seats, LEN);
            break;
        }
    }
    return 0;
}

void show_seats(seat pl[]) // 显示已分配的座位;
{
    int i;

    puts("Seats currently taken:");
    for (i = 0; i < LEN; i++)
    {
        if (pl[i].is_reserve == true)
        {
            printf("Seat %d: %s, %s\n", pl[i].id, pl[i].firstname, pl[i].lastname);
        }
    }
    return;
}

int show_menu()
{
    int ch;
    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    puts("Please you enter to choose:");
    while (ch = get_char(), strchr("abcdef", ch) == NULL)
    {
        printf("Invalid data! Please you choose again: ");
    }
    return ch;
}

char *s_gets(char *str, int n)
{
    char *result, *find;
    if (result = fgets(str, n, stdin))
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return result;
}

int get_char()
{
    int ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}
int num_empty(seat seats[], int len)
{
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (seats[i].is_reserve == false)
        {
            num++;
        }
    }
    return num;
}

void eatline()
{
    while (getchar() != '\n')
        continue;
}

void list_empty(seat seats[], int len)
{
    char temp[2 * LEN];
    if (num_empty(seats, len) == 0)
    {
        printf("All seats are assigned.");
    }
    else
    {
        make_list(seats, temp, false);
        printf("The following seats are available: ");
        puts(temp);
    }
}

void make_list(seat seats[], char *str, int kind)
{
    char temp[LEN];
    for (int i = 0; i < LEN; i++)
    {
        if (seats[i].is_reserve == kind)
        {
            sprintf(temp, "%d ", seats[i].id);
            strcat(str, temp);
        }
    }
}

void sort(seat *seats[], int n)
{
    seat *st;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(seats[j]->firstname, seats[j + 1]->firstname) > 0)
            {
                st = seats[j];
                seats[j] = seats[j + 1];
                seats[j + 1] = st;
            }
        }
    }
}

void alpha_list(seat *seats[], int n)
{
    if (num_empty(*seats, n) == LEN)
        puts("All seats are empty.");
    else
    {
        sort(seats, n);
        for (int i = 0; i < LEN; i++)
        {
            if (seats[i]->is_reserve == true)
            {
                printf("Seat %d: %s, %s\n", seats[i]->id, seats[i]->firstname, seats[i]->lastname);
            }
        }
    }
}

void assign_seat(seat seats[], int n)
{
    int ch, seat, flag;
    char list[2 * LEN];

    if (num_empty(seats, n) == false)
    {
        puts("All seats are assigned. Can't assign again!");
    }
    else
    {
        make_list(seats, list, false);
        printf("Available seats: %s\n", list);
        printf("Which seat do you want? Please you enter from the lists: ");
        do
        {
            while (scanf("%d", &seat) != 1)
            {
                eatline();
                printf("Seats: %s\n", list);
                printf("Enter a number from the lists: ");
            }
            if (seat < 1 || seat > LEN || seats[seat - 1].is_reserve == true)
            {
                printf("Seats: %s\n", list);
                printf("Enter a number from the lists: ");
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        } while (1 == flag); // 本循环判断并处理用户的错误输入;

        eatline();
        puts("Enter first name:");
        s_gets(seats[seat - 1].firstname, LEN);
        puts("Enter last name:");
        s_gets(seats[seat - 1].lastname, LEN);
        printf("%s %s assigned to seat %d.\n", seats[seat - 1].firstname, seats[seat - 1].lastname, seat);

        printf("Enter a to accept assignment, c to cancel it: ");
        ch = get_char();
        while (strchr("ac", ch) == NULL)
        {
            printf("Please enter a or c: ");
            ch = get_char();
        }
        if (ch == 'a')
        {
            seats[seat - 1].is_reserve = true;
            puts("Passenger assigned to seat.");
        }
        else if (ch == 'c')
        {
            puts("Passenger not assigned.");
        }
    }
}

void delete_seat(seat seats[], int n)
{
    int ch, seat, flag;
    char list[2 * LEN];

    if (num_empty(seats, n) == LEN)
    {
        puts("All seats already are empty. Can't delete!");
    }
    else
    {
        show_seats(seats);
        make_list(seats, list, true);
        printf("Enter the number of the seat to be deleted: ");
        do
        {
            while (scanf("%d", &seat) != 1)
            {
                eatline();
                printf("Seats: %s\n", list);
                printf("Enter a number from the lists:");
            }
            if (seat < 1 || seat > LEN || seats[seat - 1].is_reserve == false)
            {
                printf("Seats: %s\n", list);
                printf("Enter a number from this list:");
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        } while (1 == flag);

        eatline();
        printf("%s %s to be canceled for seat %d.\n", seats[seat - 1].firstname, seats[seat - 1].lastname, seat);
        printf("Enter d to delete assignment, a to abort: ");
        ch = get_char();
        while (strchr("da", ch) == NULL)
        {
            printf("Please enter d or a: ");
            ch = get_char();
        }
        if (ch == 'd')
        {
            seats[seat - 1].is_reserve = false;
            puts("Passenger dropped.");
        }
        else if (ch == 'a')
        {
            puts("Passenger retained.");
        }
    }
}