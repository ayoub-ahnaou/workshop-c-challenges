#include <stdio.h>

int main(){
    float a, b;

    printf("entrer le svaleurs de a et b:\n");
    scanf("%f %f", &a, &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    if(b == 0){
        printf("division par 0 est impossible");
    }
    else
        printf("a / b = %.2f\n", a / b);


    return 0;
}