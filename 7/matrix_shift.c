#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,shift, c = 0;
    
    scanf("%d", &n);
    int arr[n][n],shift_arr[n][n];
// 3
// 1 2 3
// 1 4 5
// 2 3 -2
// 2
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &x);
            arr[i][j] = x;
        }
    }
    scanf("%d", &shift);
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            if (j + shift <= n - 1){
                shift_arr[i][j+shift] = arr[i][j];
            }
            else
            {
                shift_arr[i][(j+shift) % n] = arr[i][j];
            }
        
            
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", shift_arr[i][j]);
        }
        printf("\n");
    }
    


}