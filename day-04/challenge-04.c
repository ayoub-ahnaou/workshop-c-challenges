#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[10] = {1, -5, -4, 50, 0, 43, -54, 61, -20, 90};

    int min = tab[0], pos = 0;
    for(int i=1; i<10; i++){
        if(tab[i] < min){
            min = tab[i];
            pos = i;
        }
    }

    printf("min c'est %d, position %d", min, pos);

    return 0;
}