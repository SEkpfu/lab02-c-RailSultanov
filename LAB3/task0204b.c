#include <stdio.h>

int main() {
    int dM, dW;
    printf("Введите дату: \n");
    printf("День месяца: ");
    scanf("%d", &dM);
    printf("Номер дня в неделе (1-Понедельник, ..., 5-Пятница, ..., 7-Воскресенье): ");
    scanf("%d", &dW);
        if (dM == 17 && dW == 5) {
        printf("Неудачный день (пятница 17-е, Италия)\n");
    }

    return 0;
}


