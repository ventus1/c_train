#include <stdio.h>

int main() {
    int a,b,c,buf,flag = 0;
    scanf("%d %d %d", &a,&b,&c);
    if ((a > b) && (b > c)){
        printf("%d %d %d", c,b,a);
        
    } else {
        if ((a < b) && (b < c)){
            printf("%d %d %d", a,b,c);
        }
        else{
            if ((a == b) && (b > c)) {
                buf = a;
                a = c;
                c = buf;
                //printf("%d %d %d  0.5\n", a,b,c);
                } else {
                    if (a >= b) {
                        buf = a;
                        a = b;
                        b = buf;
                        //printf("%d %d %d  1\n", a,b,c);
                        }
                    if (b >= c) {
                        buf = c;
                        c = b;
                        b = buf;
                        //printf("%d %d %d  2\n", a,b,c);
                    }
                    if (a >= c) {
                        buf = a;
                        a = c;
                        c = buf;
                        //printf("%d %d %d  3\n", a,b,c);
                    }
                }
            
        printf("%d %d %d", a,b,c);
        }
    }
    
}