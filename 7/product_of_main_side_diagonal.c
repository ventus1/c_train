#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,curr = 0, mult1 = 1,mult2 = 1;
    
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &x);
            arr[i][j] = x;
            if (i == j) mult1 *=  x;
            if (i + j == n-1) mult2 *= x;
    }
    
    }
    if (mult1 >= mult2) printf("%d %d", mult1, mult2);
    else printf("%d %d", mult2, mult1);
    
    // for (int i = 0; i < n; i++){
    //     for (int k = 0; k < n; k++){
    //         printf("%d ", arr[i][k]);
    //     }
    //     printf("\n");
    // }
    return 0;

}