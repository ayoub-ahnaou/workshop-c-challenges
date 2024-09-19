#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int base, exposant;
    printf("donner la base: "); scanf("%d", &base);
    printf("donner l'exposant: "); scanf("%d", &exposant);

    int puissance = pow(base, exposant);
    printf("la puisance %d^%d = %d", base, exposant, puissance);

    return 0;
}