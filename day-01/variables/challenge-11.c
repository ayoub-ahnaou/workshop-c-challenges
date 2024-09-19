#include <stdio.h>
#include <math.h>

int main(){
    float longeur, largeur, surface;

    printf("donner la longeur: ");
    scanf("%f", &longeur);

    printf("donner le largeur: ");
    scanf("%f", &largeur);
    
    surface =  largeur * longeur;

    printf("surface = %.2f", surface);

    return 0;
}