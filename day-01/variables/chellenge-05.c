#include <stdio.h>

int main(){
    float tmp_C;

    printf("entrer la temperature en C°: ");
    scanf("%f", &tmp_C);

    if(tmp_C < 0){
        printf("Solide\n");
    }
    else if(tmp_C >= 100){
        printf("Gaz\n");
    }
    else{
        printf("Liquide\n");
    }

    return 0;
}