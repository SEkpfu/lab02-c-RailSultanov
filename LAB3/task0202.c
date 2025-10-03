#include <stdio.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("fof Число положительное\n");
    } else if (num < 0) {
        printf("hoh Число отрицательное\n");
    } else {
        printf("gog Число равно нулю\n");
    }

    return 0;
}













