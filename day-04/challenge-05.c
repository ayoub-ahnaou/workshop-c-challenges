#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rechercher_sous_chaine(char chaine[], char sous_chaine[]){
    int len_chaine = strlen(chaine);
    int len_sous_chaine = strlen(sous_chaine);

    for(int i=0; i < len_chaine; i++){
        int j;
        for(j=0; j<len_sous_chaine; j++){
            if(chaine[i + j] != sous_chaine[j]){
                break;
            }
        }
        if(j == len_sous_chaine){
            return 1;
        }
    }
    return -1;
}

int main(){
    char chaine[] = {"un programme C qui utilise une recherche linéaire pour trouver le maximum dans un tableau d'entiers. Affichez la valeur maximale et son index."};

    char sous_chaine[20];

    printf("entrer une sous-chaine de charactere: ");
    scanf(" %[^\n]s", sous_chaine);

    int exist = rechercher_sous_chaine(chaine, sous_chaine);
    if(exist == 1){
        printf("sous chaine exist");
    }
    else if(exist == -1){
        printf("sous chaine ne pas trouve");
    }


    return 0;
}