#include <stdio.h>

int main() {
    int m,n;
    int current_value = 1; 
    int top = 0, bottom, left = 0, right; 

    scanf("%d %d", &m,&n);
    right = n - 1;
    bottom = m - 1;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < n; k++) {
            arr[i][k] = 0;
        }
    }

    while (current_value <= m * n) {

        for (int i = left; i <= right; i++) {
            arr[top][i] = current_value++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            arr[i][right] = current_value++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = current_value++;
            }
            bottom--;
        }


        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = current_value++;
            }
            left++;
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < n; k++) {
            printf("%3d", arr[i][k]);
        }
        printf("\n");
    }

    return 0;
}