#include <stdio.h>
#include <stdlib.h>

int main(){
    // algorithm de tri a bulles
    int tab[10] = {21, -43, -5, 30, 4, 10, -6, 33, 50, 90};

    printf("avant le tri: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    int tmp;
    for(int i=1; i<10; i++){
        if(tab[i-1] > tab[i]){
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
        }
    }

    printf("\napres le tri: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    return 0;
}