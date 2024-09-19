#include <stdio.h>
#include <stdlib.h>

int main(){
    // apres fusion des elements

    int tab1[] = {4, -4, 12, -9, 7, -5, 20, 0, 1, -60};
    int tab2[] = {400, 932, 43, -990};

    int taille1 = sizeof(tab1)/sizeof(int);
    int taille2 = sizeof(tab2)/sizeof(int);
    int taille = taille1 + taille2;

    int tab[taille];

    for(int i=0; i<taille1; i++){
        tab[i] = tab1[i];
    }
    
    for(int i=0; i<taille2; i++){
        tab[taille1 + i] = tab2[i];
    }

    printf("apres la fusion de deux elements: ");
    for(int i=0; i<taille; i++){
        printf("%d, ", tab[i]);
    }


    return 0;
}