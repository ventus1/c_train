int gcd(int x, int y){
    int gc = 1, max = (x > y)?x:y;
    for (int i = 1; i < max; i ++){
        if ((x % i == 0) && (y % i == 0)) gc = i;
    }
    return gc;
}
