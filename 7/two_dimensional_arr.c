#include <stdio.h>

int main() {
    int n,m,x;
    
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            scanf("%d", &x);
            arr[i][k] = x;
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            printf("%d ", arr[i][k]);

        }
        printf("\n");
    }

}