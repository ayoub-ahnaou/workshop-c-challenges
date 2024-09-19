#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char chaine[50];
    printf("donner une chaine de caractere: ");
    scanf(" %[^\n]s", chaine);
    int i=0;
    while(chaine[i] != '\0'){
        chaine[i] = toupper(chaine[i]);
        i++;
    }
    printf("chaine majuscule: %s", chaine);
    
    
    
    printf("\n");
    return 0;
}