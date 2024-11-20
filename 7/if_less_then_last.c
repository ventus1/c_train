#include <stdio.h>

int main() {
    int count_array = 0;
    int flag = 0, s, min, min_count = 0;
    scanf("%d",&count_array);
    
    int array[count_array];
    int array_min[count_array];
    for (int i = 0; i < count_array; i++){
        scanf("%d", &s);
        array[i] = s;
    }
    min = array[count_array-1];
    //printf("%d\n", min);
    for (int i = 0; i < count_array; i++){
        if (array[i] < min){
            flag = 1;
            array_min[min_count] = array[i];
            printf("%d ", array_min[min_count]);
            
            min_count ++;
        }
    }
    if (flag == 0)
        printf("0");
return 0;
}