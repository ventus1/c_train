void sort_arr(int arr[], int n, int fl){
    int min = arr[0], temp;
    for (int i = 0; i < n-1; i++){
        int index = i; 
        for (int j = i+1; j < n; j++){
             if ((fl == 0 && arr[j] < arr[index]) || (fl == 1 && arr[j] > arr[index])) {
                index = j;
            }
        }
        if (index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

}