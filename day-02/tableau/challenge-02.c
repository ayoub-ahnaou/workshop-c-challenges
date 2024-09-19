#include <stdio.h>
#include <stdlib.h>

int main(){
    // trouver le minimum
    int tab[] = {4, -4, 12, -9, 67, -5, 20, 0, 1, -60};
    int max = tab[0];

    for(int i=0; i<10; i++){
        if(tab[i] < max){
            max = tab[i];
        }
    }printf("le minimum : %d", max);
    

    return 0;
}