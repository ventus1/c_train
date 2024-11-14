#include <stdio.h>

int main(void) {
    double dollars; // Сумма в долларах
    double kurs;    // Курс доллара
    double rub;     // Сумма в рублях

    // Считываем сумму в долларах

    scanf("%lf", &dollars);

    // Считываем курс доллара

    scanf("%lf", &kurs);

    // Вычисляем сумму в рублях
    rub = dollars * kurs;

    // Выводим результат
    printf("%f",rub);
    
    return 0;
}