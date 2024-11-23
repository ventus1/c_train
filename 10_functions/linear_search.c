int linear_search(int arr[], int n, int arg){
    int i = 0;
    while (i < n){
        if (arr[i] == arg){
            return i;
        }
        i++;
    }
    return -1;
}