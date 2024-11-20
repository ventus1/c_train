#include <stdio.h>

int main() {
    int count_array = 0, m_count = 0, l_count = 0,s, sum = 0;
    double average;
    scanf("%d",&count_array);
    //count_array = 5;
    int more[count_array], less[count_array], arr[count_array];
    for (int i = 0; i<count_array; i++){
        //printf("count array = %d \n", count_array);
        scanf("%d", &s);
        arr[i] = s;
        sum += s;
    }
    average = (double)sum/count_array;
    for (int i = 0; i<count_array; i++){
        if (arr[i] > average){
            more[m_count] = arr[i];
            m_count ++;
        }
        else
        {
            less[l_count] = arr[i];
            l_count ++;
        }
        
    }
    for (int i = 0; i<m_count; i++){
        printf("%d ", more[i]);
    }
    for (int i = 0; i<l_count; i++){
        printf("%d ", less[i]);
        
    }

return 0;
}