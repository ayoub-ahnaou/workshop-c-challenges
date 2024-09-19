#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[25], prenom[25];
    int notes[3];

}Etudiant;

int main(){
    Etudiant etudiant;

    printf("votre nom: "); scanf("%s", etudiant.nom);
    printf("votre prenom: "); scanf("%s", etudiant.prenom);
    printf("entrer les trois notes.\n");

    scanf("%d %d %d", &etudiant.notes[0], &etudiant.notes[1], &etudiant.notes[2]);

    printf("les informations sont: ");
    printf("%s %s, notes: %d, %d, %d.", etudiant.nom, etudiant.prenom, etudiant.notes[0], etudiant.notes[1], etudiant.notes[2]);

    printf("\n");
    return 0;
}