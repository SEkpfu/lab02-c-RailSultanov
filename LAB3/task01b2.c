#include <stdio.h>
int main() 
{
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

  double max1;
  max1 = s1 > s2 ? s1 : s2;
  max1 = max1 > s3 ? max1 : s3; 


  printf("max площадь, S= %.2f\n",max1);

  return 0;
}