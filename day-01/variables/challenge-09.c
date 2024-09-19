#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, z1;
    float x2, y2, z2;
    float distance;

    printf("donner les coordinations de 1er point (x, y, z):\n");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("donner les coordinations de 2eme point (x, y, z):\n");
    scanf("%f %f %f", &x2, &y2, &z2);
    
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    
    printf("la distance entre x et y dans un espace 3D = %.2f", distance);

    return 0;
}