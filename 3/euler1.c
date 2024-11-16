#include <stdio.h>

int main() {
    double e3_fact = 6;
    double e1,e2,e3;
    e1 = 1 + 1 + (float)1/2 + (float)1/e3_fact;
    e2 = e1 + (float)(1/(e3_fact  * 4));
    e3 = e2 + (float)(1/(e3_fact  * 4 * 5));
    printf("%.5lf\n%.5lf\n%.5lf ", e1, e2,e3);
    
    return 0;
}