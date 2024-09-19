#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int nbre, somme = 0, count = 0;
    float moyenne;
    printf("entrer une serie des nombres entiers, \nNB: entrer 0 pour arreter\n");
    do{
        scanf("%d", &nbre);
        somme = somme + nbre;
        count++;

    }while(nbre != 0);

    moyenne = somme / count;

    printf("la moyenne est %.2f", moyenne);


    return 0;
}