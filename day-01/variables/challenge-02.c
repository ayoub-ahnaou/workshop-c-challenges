#include <stdio.h>

int main(){
    float temperature, k;

    printf("entrer la temperature en (C°): ");
    scanf("%f", &temperature);

    k = temperature + 273.15;

    printf("temperature en kelvin est %.2f kelvin ", k);

    return 0;
}