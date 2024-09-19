#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("donner un nombre n: ");
    scanf("%d", &n);

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("factoriel est = %d", fact);

    return 0;
}