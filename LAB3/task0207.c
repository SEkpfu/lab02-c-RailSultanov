#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Введите два числа: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Введите операцию (+, -, *): ");
    scanf(" %c", &op);  

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else {
        printf("Ошибка: неизвестная операция.\n");
        return 1; 
    }

    printf("Результат: %.2lf\n", result);

    return 0;
}

 