#include <stdio.h>
#include <string.h>

int main() {
    char language[4];
    int day_number;

    printf("Введите язык (RUS или ENG): ");
    scanf("%s", language);

    printf("Введите номер дня недели (1-7): ");
    scanf("%d", &day_number);

    if (day_number < 1 && day_number > 7) {
        printf("Ошибка: Неверный номер дня недели.\n");
        return 1; 
    }

    if (strcmp(language, "RUS") == 0) {
        switch (day_number) {
            case 1: printf("111понедельник\n"); break;
            case 2: printf("222вторник\n"); break;
            case 3: printf("333среда\n"); break;
            case 4: printf("444четверг\n"); break;
            case 5: printf("555пятница\n"); break;
            case 6: printf("666суббота\n"); break;
            case 7: printf("777воскресенье\n"); break;
        }
    } else if (strcmp(language, "ENG") == 0) {
        switch (day_number) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
        }
    } else {
        printf("Ошибка: Неверный язык.\n");
        return 1; 
    }

    return 0;
}