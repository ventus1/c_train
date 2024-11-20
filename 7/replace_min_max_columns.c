#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,curr = 0,temp_sum = 0, min = 0, max = 0,min_pos = 0, max_pos = 0, c = 0;
    
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
        //printf("%d ", temp_sum);
        sum[i] = temp_sum; 
    }
    min = 10000;
    max = -10000;
    for (int i = 0; i < m; i++){
        
        if (sum[i] < min) {
            min = sum[i];
            min_pos = i;
        }
        if (sum[i] > max) {
            //printf("max %d ", i);
            max = sum[i];
            max_pos = i;
        }
        //printf("%d ", sum[i]);
    }    
    
//printf("min max %d %d\n",min_pos,max_pos);
    for (int i = 0; i < n; i++){
        
        c = arr[i][min_pos];
        arr[i][min_pos] = arr[i][max_pos];
        arr[i][max_pos] = c;
        //printf("%d changed %d \n", )
        
}
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }

}