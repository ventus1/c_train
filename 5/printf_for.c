#include <stdio.h>

int main() {
    int a,b,diff,size;
    size = 0;
    scanf("%d %d", &a,&b);
    diff = a+b;
    for (int i = a; i <= b; i++){
        
        for (int k = 0; k <= size; k++){
            printf("%4d ", i);
        }
        size += 1;
        
    }return 0;
}
    
