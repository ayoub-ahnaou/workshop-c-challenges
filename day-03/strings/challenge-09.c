#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char chaine[50], sousChaine[20];
    printf("donner une chaine de caractere: ");
    scanf(" %[^\n]s", chaine);

    printf("donner une sous-chaine de caractere: ");
    scanf(" %[^\n]s", sousChaine);

    if(strstr(chaine, sousChaine)){
        printf("soues-chaine de caractere est trouvée.\n");
    }
    else{
        printf("soues-chaine de caractere est ne pas trouvée.\n");
    }


    return 0;
}