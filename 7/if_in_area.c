#include <stdio.h>

int main() {
    int count_array = 0;
    int flag = 0, s, min, mm_count = 0, max;
    scanf("%d",&count_array);
    
    int array[count_array];
    int array_area[count_array];
    for (int i = 0; i < count_array; i++){
        scanf("%d", &s);
        array[i] = s;
    }
    min = array[count_array-1];
    max = array[0];
    //printf("%d\n", min);
    for (int i = 0; i < count_array; i++){
        if ((array[i] < min) && (array[i] > max)){
            flag = 1;
            array_area[mm_count] = array[i];
            printf("%d ", array_area[mm_count]);
            
            mm_count ++;
        }
    }
    if (flag == 0)
        printf("0");
return 0;
}