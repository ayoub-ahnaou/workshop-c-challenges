#include <stdio.h>
#include <math.h>

int main(){
    int nbre, inverse, tmp;

    printf("donner un nombre de 4 chiffres: ");
    scanf("%d", &nbre);

    tmp = nbre;
    while(tmp > 0){
        inverse = inverse * 10 + tmp % 10;
        tmp = tmp / 10;
    }

    printf("inverse de %d est %d", nbre, inverse);

    return 0;
}