#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,curr = 0;
    
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        arr[i][j] = j-i;
    }
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++){
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }
    return 0;

}