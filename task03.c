#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r;

    printf("x= ");
    scanf("%lf", &x);

    printf("y= ");
    scanf("%lf", &y);

    r = 6;

    double a, b;
    a = 2 * x + 6;
    b = x - 6;

    if ( x >= 0 && y >=0 && pow(x, 2) + pow(y, 2) <= pow(r, 2))
        printf("Принадлежит");
    else if (y <= a && y >= 0 && x <= 0 && y <=6 && x <=-3)
        printf("Принадлежит");
    else if ( y <= 0 && x <= 0 && x >= -3 && y >= -6)
        printf("Принадлежит");
    else if (y >= b && y <= 0 && x >= 0)
        printf("Принадлежит");
    else
        printf("Не принадлежит");

    return 0;
}

