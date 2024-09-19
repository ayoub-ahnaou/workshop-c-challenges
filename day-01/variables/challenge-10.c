#include <stdio.h>
#include <math.h>

int main(){
    float rayon, volume;

    printf("donner le rayon: ");
    scanf("%f", &rayon);
    
    volume =  (4/3) * 3.14 * pow(rayon, 3);
    
    printf("volume = %.2f", volume);

    return 0;
}