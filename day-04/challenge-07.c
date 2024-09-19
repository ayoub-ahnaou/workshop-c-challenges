#include <stdio.h>
#include <stdlib.h>

int main(){
    // algorithm de tri a bulles
    int tab[10] = {21, -43, -5, 30, 4, 10, -6, 133, 50, 90};

    printf("avant le tri: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    for(int i=1; i<10; i++){
        int tmp = tab[i];
        int j = i - 1;
        while(tmp < tab[j] && j >= 0){
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = tmp;
    }

    printf("\napres le tri: ");
    for(int i=0; i<10; i++){
        printf("%d, ", tab[i]);
    }

    return 0;
}