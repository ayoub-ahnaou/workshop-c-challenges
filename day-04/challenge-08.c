#include <stdio.h>
#include <stdlib.h>

int main(){
    // algorithm de tri par selection
    int tab[10] = {21, -43, -5, 30, 4, 10, -6, 133, 50, 90};
    int i, j, min_index;

    printf("avant le tri: ");
    for(i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    for(i=0; i<10; i++){
        // rechercher le petit element et le stocker dans une variable 'min'
        min_index = i;
        for(j=i+1; j<10; j++){
            if(tab[j] < tab[min_index]){
                min_index = j;
            }
        }

        // remplacer le premier element par la valeur de 'min'
        if(min_index != i){
            int tmp = tab[i];
            tab[i] = tab[min_index];
            tab[min_index] = tmp;
        }

    }

    printf("\napres le tri: ");
    for(i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    return 0;
}