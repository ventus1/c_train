#include <stdio.h>
#include <math.h>
int main() {
  int edge, square, face, volume;
    scanf("%d", &edge);
    face = edge * edge;
    square = face * 6;
    volume = pow(edge,3);
    printf("%d %d %d", face, square, volume);
  return 0;
}