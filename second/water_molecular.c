#include <stdio.h>
#include <math.h>
int main() {
    double droplet, mass_drop = 0.05, mass_all = 249.5;
    int n;
    double mol_mass = 3e-23;
    scanf("%d", &n);
    
    printf("%d %.3e", (int)(mass_all/mass_drop), mass_all/mol_mass*n);
  return 0;
}