#include <stdio.h>
#include <stdlib.h>

int main(){
    // pyramide d'etoile
    // nombre premier comme 7, les seules diviseurs sont 1 et 7.
    int n;
    printf("donner un nombre n: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            printf("  ");
        }
        for(int k=0; k<(i+1)*2-1; k++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}