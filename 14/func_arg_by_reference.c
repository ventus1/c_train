
#include <stdio.h>
//Function arguments by reference
#include <string.h>

int addone(int *n) {
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}

int main(){
    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);
    return 0;
}

