#include <stdio.h>
#include <stdlib.h>

int recherche_dup(int * tableau, int taille){
    for(int i=0; i<taille; i++){
        for(int j=i+1; j<taille; j++){
            if(tableau[i] == tableau[j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int tableau[] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7, 5, 6, 7};
    int len = sizeof(tableau) / sizeof(int);


    int duplicate = recherche_dup(tableau, len);

    if(duplicate == 1){
        printf("il y'a des doublons..");
    }
    else{
        printf("il n y'a pas des doublons");
    }

    return 0;
}