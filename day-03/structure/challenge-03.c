#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float largeur, longeur;
}Rectangle;

float calculAir(Rectangle rectangle){
    return rectangle.largeur * rectangle.longeur;
}

int main(){
    Rectangle rectangle;

    printf("entrer largeur: "); scanf("%f", &rectangle.largeur);
    printf("entrer longeur: "); scanf("%f", &rectangle.longeur);

    printf("air = %2.f", calculAir(rectangle));

    printf("\n");
    return 0;
}