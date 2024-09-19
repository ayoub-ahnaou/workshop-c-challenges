#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, moyenne;

    printf("donner trois notes:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    moyenne = pow((n1 * n2 * n3), 0.333);
    
    printf("la moyenne giometrique est %.2f", moyenne);

    return 0;
}