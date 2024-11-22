int is_prime(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            count++;
        }
        
    }
    if (count <= 2) 
        return 1;
    else 
        return 0;
    
}

int main () {
    int k;
    scanf("%d", &k);

    printf("%d ",is_prime(k));
}