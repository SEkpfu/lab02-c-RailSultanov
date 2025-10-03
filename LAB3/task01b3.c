#include <stdio.h>
#include <math.h>

int main() {
  double x, y, d;
  int p;

  printf("Введите координаты попадания (x, y):\n");
  printf("x = ");
  scanf("%lf", &x);
  printf("y = ");
  scanf("%lf", &y);

  d = sqrt(x * x + y * y); 

  if (d <= 2) {
    p = 10;
  } else if (d <= 4) {
    p = 5;
  } else {
    p = 0;
  }

  printf("Количество выбитых очков: %d\n", p);

  return 0;
}