int minmax(int arr[], int n, int fl){
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > max){
            max = arr[i];
        }

    }
    if (fl == 1){
        return max;
    }
    else return min;
}
