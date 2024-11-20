#include <stdio.h>

int main() {
    int count_array = 0;
    int e_count = 0, ne_count = 0,s;
    
    scanf("%d",&count_array);
    //count_array = 5;
    int even[count_array], not_even[count_array];
    for (int i = 0; i<count_array; i++){
        //printf("count array = %d \n", count_array);
        scanf("%d", &s);
        if (s % 2 == 0) {
            even[e_count] = s;
            e_count ++;
        }
        else{
            not_even[ne_count] = s;
            ne_count ++;
        }
    }
    for (int i = 0; i<e_count; i++){
        printf("%d ", even[i]);

    }
    for (int i = 0; i<ne_count; i++){
        printf("%d ", not_even[i]);
        
    }

return 0;
}