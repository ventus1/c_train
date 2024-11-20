#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,curr = 0,temp_sum = 0;
    
    scanf("%d %d", &n,&m);
    int arr[n][m], sum[m];

    for (int i = 0; i < n; i++){
        temp_sum = 0;
        for (int j = 0; j < m; j++){
            scanf("%d", &x);
            arr[i][j] = x;
        }
    }

    for (int i = m-1; i >= 0; i--){
        temp_sum = 0;
        for (int j = n-1; j >= 0; j--){
            temp_sum+= arr[j][i];
        }
        printf("%d ", temp_sum);
    }

    // for (int i = 0; i < n; i++){
    //     for (int k = 0; k < n; k++){
    //         printf("%d ", arr[i][k]);
    //     }
    //     printf("\n");
    // }
}