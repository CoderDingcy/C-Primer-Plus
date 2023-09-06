#include <stdio.h>
#include <math.h>
#define PI 3.1415926

typedef struct
{
    double length;
    double angle;
} polar;

typedef struct
{
    double x;
    double y;
} rect;

rect polar_to_rect(const polar *temp);
int main()
{
    polar input;
    rect answer;

    printf("Enter magnitude and angle in degrees (q tu quit): ");
    while (scanf("%lf %lf", &input.length, &input.angle) == 2)
    {
        answer = polar_to_rect(&input);
        printf("polar coord: %g %g\n", input.length, input.angle);
        printf("rectangular coord: %g %g\n", answer.x, answer.y);
        printf("You can enter again (q tu quit): ");
    }
    puts("Done.");

    return 0;
}

rect polar_to_rect(const polar *temp)
{
    rect rt;
    const double rad = PI / 180;
    rt.x = (temp->length) * cos(temp->angle * rad);
    rt.y = (temp->length) * sin(temp->angle * rad);
    return rt;
}
