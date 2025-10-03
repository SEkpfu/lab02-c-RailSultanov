#include <stdio.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    if (num % 2 == 0) {  
        printf("Число %d - четное\n", num);  
    } else {  
        printf("Число %d - нечетное\n", num);  
    }  
      
    return 0;  
}  
