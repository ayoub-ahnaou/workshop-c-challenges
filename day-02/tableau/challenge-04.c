#include <stdio.h>
#include <stdlib.h>

int main(){
    // inversion d'un tableau

    int tab[] = {4, -4, 12, -9, 67, -5, 20, 0, 1, -60};

    printf("le tableau avant l'inverse: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    for(int i=0; i<10/2; i++){
        int tmp = tab[i];
        tab[i] = tab[9-i];
        tab[9-i] = tmp;
    }

    printf("\nle tableau apres l'inverse: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }
    

    return 0;
}