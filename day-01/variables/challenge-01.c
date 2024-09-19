#include <stdio.h>

int main(){
    char nom[25], prenom[25], email[50];
    int age;
    char sexe;

    printf("entrer votre nom: ");
    scanf("%s", nom);
    printf("entrer votre prenom: ");
    scanf("%s", prenom);
    printf("entrer votre age: ");
    scanf("%d", &age);
    printf("entrer votre email: ");
    scanf("%s", email);
    printf("entrer votre sexe (m/f): ");
    scanf(" %c", sexe);

    printf("votre information sont:\n");
    printf("%s %s (%c), %d ans. email: %s", nom, prenom, sexe, age, email);

    return 0;
}