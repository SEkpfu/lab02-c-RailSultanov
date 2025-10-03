#include <stdio.h>
int main () {
    double r, a, b;
    
    printf("Введите радиус r : ");
    scanf("%lf" , &r);
    printf("Введите стороны коробки a и b : ");
    scanf("%lf %lf", &a, &b );

    double diam = 2 * r;
     if (diam <= a && diam <= b) {
        printf("DOD Торт радиусом %.2lf уместится в коробку со сторонами %.2lf и %.2lf.\n", r, a, b);
    } else {
        printf("FOF Торт радиусом %.2lf НЕ уместится в коробку со сторонами %.2lf и %.2lf.\n", r, a, b);
    }

    return 0;
}

    



















