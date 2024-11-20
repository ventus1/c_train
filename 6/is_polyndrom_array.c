#include <stdio.h>

int main() {
    int s, x, flag = 1;
    scanf("%d", &s);
    //s = 5;
    int  a[s];
    for (int i = 0; i < s; i++){
        scanf("%d", &x);
        a[i] = x;
    }
    for (int i = 0; i < (int)s/2; i++){
        if (a[s - i - 1] != a[i]){
            //printf("%d %d\n",s-i, i);
            flag = 0;
        }
    }
    if (flag == 1) 
        printf("YES");
        else 
        printf("NO");
    return 0;
}