#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x, y;
}Point;

int main(){
    Point point;
    Point * ptr = &point;

    point.x = 23;
    point.y = 99;


    printf("entrer nouvelle X: "); scanf("%f", &point.x);
    printf("entrer nouvelle Y: "); scanf("%f", &point.y);

    printf("les nouvelle valeurs x = %2.f et y = %.2f", (*ptr).x, (*ptr).y);

    printf("\n");
    return 0;
}