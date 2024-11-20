#include <stdio.h>

int main() {
    int n,m,x,curr = 0;
    
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            for (int curr = 0; curr < n; curr++){
                arr[i][curr] = curr+1;     
        }
        }
        else
        {
            for (int curr = 0; curr < n; curr++){
                arr[i][curr] = n-curr;
        }
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