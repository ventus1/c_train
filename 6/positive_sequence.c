#include <stdio.h>

int main() {
    int s,flag,k = 0;
    flag = 1;
    scanf("%d", &s);
    while (s !=-9999){
        if ((s < 0) && (s !=-9999)){
            flag = 0;
        }
        scanf("%d", &s);
        k++;
        if (s == -9999) break;
    }
    if ((flag == 1) && (k > 0)){
        printf("YES");
    }
    else printf("NO");
}