#include<stdio.h>
int min(int a, int b, int c){
    int d = ((a > b)? b : a); 
    return (d > c)? c : d;
}
int main(void){
    int a,b,c;
// напишите программу, использующую функцию min
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",min(a,b,c));
    return 0;
}