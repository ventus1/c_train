// euler.c
#include <stdio.h>
#include "euler.h" 
double calculate_e3() {
    double e3_fact = 6;
    double e1, e2, e3;
    e1 = 1 + 1 + (float)1/2 + (float)1/e3_fact;
    e2 = e1 + (float)(1/(e3_fact * 4));
    e3 = e2 + (float)(1/(e3_fact * 4 * 5));
    
    // Print values if needed
    //printf("%.5lf\n%.5lf\n%.5lf\n", e1, e2, e3);
    
    return e3; // Return the value of e3
}

// int main() {
    
//     calculate_e3(); // Call the function to see outputs
//     return 0;
// }