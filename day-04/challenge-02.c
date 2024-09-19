#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[10] = {1, 43, -56, 54, 0, 4, -5, -12, 99, 2};
    int nbre;
    printf("entrer le nombre a rechercher: ");
    scanf("%d", &nbre);

    for(int i=0; i<10; i++){
        if(tab[i] == nbre){
            printf("nombre %d est touvee..", nbre);
            return 0;
        }
    }
    printf("nombre %d est ne pas touvee..", nbre);

    return 0;
}