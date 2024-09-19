#include <stdio.h>
#include <stdlib.h>

int main(){
    // remplir et affichage des elements
    int tab[10];

    printf("s'il vous plait remplir le tableau\n");
    for(int i=0; i<10; i++){
        printf("valeur %d: ", i+1);
        scanf("%d", &tab[i]);
    }
    printf("les elements de tableau sont: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    return 0;
}