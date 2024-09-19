#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    // supprission des espaces
    char chaine[50], nvChaine[50];
    printf("donner une chaine de caractere: ");
    scanf(" %[^\n]s", chaine);

    int i=0, j=0;
    while(chaine[j] != '\0'){
        if(chaine[j] != ' '){
            nvChaine[i] = chaine[j];
            i++;
        }
        j++;
    }
    
    printf("appres suppression des espaces.\n");
    for(int k=0; k<i; k++){
        printf("%c", nvChaine[k]);
    }


    return 0;
}