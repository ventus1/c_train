#include <stdio.h>

int main() {
    int m, d;
    scanf("%d %d", &m, &d);

    int dayOfYear;

    switch (m) {
        case 1: // Январь
            dayOfYear = d;
            break;
        case 2: // Февраль
            dayOfYear = 31 + d; // 28 дней в феврале для невисокосного года
            break;
        case 3: // Март
            dayOfYear = 31 + 28 + d; // 31 + 28 = 59
            break;
        case 4: // Апрель
            dayOfYear = 31 + 28 + 31 + d; // 31 + 28 + 31 = 90
            break;
        case 5: // Май
            dayOfYear = 31 + 28 + 31 + 30 + d; // 31 + 28 + 31 + 30 = 120
            break;
        case 6: // Июнь
            dayOfYear = 31 + 28 + 31 + 30 + 31 + d; // 31 + 28 + 31 + 30 + 31 = 151
            break;
        case 7: // Июль
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + d; // ... до июля (181)
            break;
        case 8: // Август
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d; // ... до августа (212)
            break;
        case 9: // Сентябрь
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d; // ... до сентября (241)
            break;
        case 10: // Октябрь
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d; // ... до октября (273)
            break;
        case 11: // Ноябрь
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d; // ... до ноября (304)
            break;
        case 12: // Декабрь
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
            break;
        default:
            printf("ERROR!");
            return -1; // Завершаем программу с ошибкой
    }

    printf("%d\n", dayOfYear);
    return 0; // Успешное завершение программы
}