#include <stdio.h>

int main() {
    int x;

    printf("Введите количество орехов: ");
    scanf("%d", &x);

    printf("Бурундук закопал %d орех", x);

    if (x % 10 == 1 && x % 100 != 11) {
        printf("AAAA.\n");
    } else if (x % 10 >= 2 && x % 10 <= 4 && (x % 100 < 10 || x % 100 >= 20)) {
        printf("BBBBBа.\n");
    } else {
        printf("CCCCCов.\n");
    }

    return 0;
}

