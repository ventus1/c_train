#include <stdio.h> 

int sequence_multipliers(int n,int x){
    int temp = x * (x+1) * (x + 2);
    if (temp == n) {
        //printf("da");
        return x;
    } 
    if (temp > n) return -1;
    return sequence_multipliers(n,x+1);
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", sequence_multipliers(x,1));
    return 0;
}