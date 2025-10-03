#include <stdio.h>
int main_if() {
  double a1, b1, a2, b2, a3, b3;

  printf("Введите стороны 1-го прямоугольника \n");
  printf("a1= "); scanf("%lf", &a1);
  printf("b1= "); scanf("%lf", &b1);

  printf("Введите стороны 2-го прямоугольника \n");
  printf("a2= "); scanf("%lf", &a2);
  printf("b2= "); scanf("%lf", &b2);

  printf("Введите стороны 3-го прямоугольника \n");
  printf("a3= "); scanf("%lf", &a3);
  printf("b3= "); scanf("%lf", &b3);

  double s1 = a1 * b1;
  double s2 = a2 * b2;
  double s3 = a3 * b3;

  double f = s1;
  int g = 1;

  if (s2 > g) {
    f = s2;
    g = 2;
  }

  if (s3 > f) {
    f = s3;
    g = 3;
  }

  printf("max площадь у %d-го прямоугольника, S= %.2f\n", f, g);

  return 0;
}