#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,curr = 0, sum1 = 0,sum2 = 0;
    
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &x);
            arr[i][j] = x;
            if (j > i) {
                
                sum1 += x;
            }
            if (i + j >= n) {
                sum2 += x;
            }
            
    }
    
    }
    if (sum1 >= sum2) printf("%d %d", sum2,sum1);
    else printf("%d %d", sum1, sum2);
    
    // for (int i = 0; i < n; i++){
    //     for (int k = 0; k < n; k++){
    //         printf("%d ", arr[i][k]);
    //     }
    //     printf("\n");
    // }
    return 0;

}