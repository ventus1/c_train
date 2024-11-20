#include <stdio.h>

int main() {
    int count_array,s, min_pos = 0, max_pos = 0, max = 0, min = 2147483647;
    scanf("%d", &count_array);
    int arr[count_array];
    for (int i = 0; i < count_array; i++){
        scanf("%d", &s);
        if (s < min){
            min = s;
        }
        if (s > max){
            max = s;
        }
        arr[i] = s;
    }
    for (int i = 0; i < count_array; i++){
        if (arr[i] == max){
            arr[i] = min;
        }else{
        if (arr[i] == min){
            
            arr[i] = max;
        
        }
        }
    }
    for (int i = 0; i < count_array; i++){
        printf("%d ", arr[i]);}
return 0;
}