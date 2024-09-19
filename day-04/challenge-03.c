#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[10] = {1000, -5, -4, 50, 0, 100, -54, 61, -20, 90};

    int max = tab[0], pos = 0;
    for(int i=1; i<10; i++){
        if(tab[i] > max){
            max = tab[i];
            pos = i;
        }
    }

    printf("maximum c'est %d, position %d", max, pos);

    return 0;
}