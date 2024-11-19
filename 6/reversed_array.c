#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
int main (){
    int s, temp;
    
    scanf("%d", &s);
    int arr_int[s],b[s];
    for (int i = 0; i<s;i++){
        scanf("%d", &temp);
        //printf("%d ", s-i-1);
        arr_int[s-i-1] = temp;
    }
    
    //printf("\n%d",arr_int[1]);
    for (int i = 0; i<s;i++){
        printf("%d ", arr_int[i]);
    }
}