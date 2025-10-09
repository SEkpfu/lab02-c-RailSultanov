#include <stdio.h>
#include <math.h>

int main () {
    double x , y;

    printf ("x = ");
    scanf ("%lf", &x);

    if (x >= 5) { 
    y = cos(M_PI * x - M_PI / 2.0); 
    } else if (x > 0 && x < 5) { 
        y = 10 + 2.0 / 3.0; 
    } else if (x <=0)
    {
        y = 2.0 / sqrt(x * x + 1.0); 
    }

    printf ("y = %lf\n", y);

    return 0;
    




}