#include <stdio.h>

int main(){
    float n1, n2, n3, moyenne;

    printf("donner trois notes:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    moyenne = ((2 * n1) + (3 * n2) + (5 * n3)) / (2 + 3 + 5);
    
    printf("la moyenne ponderee est %.2f", moyenne);

    return 0;
}