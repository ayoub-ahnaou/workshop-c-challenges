#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titre[25];
    char auteur[25];
    char annee[10];
}Livre;

Livre ajoutLivre(){
    Livre livre;

    printf("titre de livre: "); scanf(" %[^\n]s", livre.titre);
    printf("auteur de livre: "); scanf(" %[^\n]s", livre.auteur);
    printf("annee de livre (jj/mm/yyyy): "); scanf(" %[^\n]s", livre.annee);

    return livre;
}

int main(){
    Livre livre = ajoutLivre();
    
    printf("informations de livre.\n ");
    printf("titre: %s | auteur: %s | annee: %s", livre.titre, livre.auteur, livre.annee);

    printf("\n");
    return 0;
}