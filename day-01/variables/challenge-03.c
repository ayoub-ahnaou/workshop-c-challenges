#include <stdio.h>

int main(){
    float km, yard;

    printf("entrer la distance en (km): ");
    scanf("%f", &km);

    yard = km * 1093.61;

    printf("distance en yards est %.2f yard ", yard);

    return 0;
}