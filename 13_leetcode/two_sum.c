#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Выделяем память для массива из двух целых чисел
    int* a = malloc(2 * sizeof(int));
    if (a == NULL) {
        // Проверка на успешное выделение памяти
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int k = i + 1; k < numsSize; k++) {
            if (nums[i] + nums[k] == target) {
                a[0] = i;
                a[1] = k;
                *returnSize = 2; // Устанавливаем размер возвращаемого массива
                return a; // Возвращаем указатель на массив
            }
        }
    }

    // Если пара не найдена, освобождаем память и возвращаем NULL
    free(a);
    *returnSize = 0;
    return NULL;
}