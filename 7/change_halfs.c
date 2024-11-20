#include <stdio.h>

int main() {
    int count_array,s;
    scanf("%d", &count_array);
    int arr[count_array];
    for (int i = 0; i < count_array; i++){
        scanf("%d", &s);
        arr[i] = s; 
    }
    for (int i = (int)count_array/2; i < count_array; i++){
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < (int)count_array/2; i++){
        printf("%d ", arr[i]);
    }
}