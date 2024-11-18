#include <stdio.h>

int main() {
    int quadrant;
    double a,b;
  scanf("%lf %lf", &a,&b);
   switch(a > 0){
    
    case 1: 
    switch(b > 0){
        case 1: quadrant = 1; break;
        case 0: quadrant = 4; break;
        default: quadrant = 23423;
    }break;
    case 0: 
    switch(b > 0){
        case 1: quadrant = 2; break;
        case 0: quadrant = 3; break;
        default: quadrant = 23423;
    }break;
    
    //default: printf("%d %d", a > 0);
    }
    printf("%d", quadrant);
  return 0;
  
}