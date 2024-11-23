#include <stdio.h>

int binary_search(int arr[], int n, int arg) {
    int l_wall = 0;
    int r_wall = n - 1;

    while (l_wall <= r_wall) { 
        int mid = l_wall + (r_wall - l_wall) / 2; 

        if (arr[mid] == arg) {
            return mid; 
        }
        else if (arr[mid] < arg) {
            l_wall = mid + 1;
        }
        else {
            r_wall = mid - 1; 
        }
    }

    return -1;
}
