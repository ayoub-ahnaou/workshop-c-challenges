#include <stdio.h>
#include <stdlib.h>

int main()
{
    // generer un mot de passe

    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

    int n;
    printf("combien de caractere voulez vous dans votre mot de passe: ");
    scanf("%d", &n);

    char pwd[n + 1];
    int random;
    for (int i = 0; i < n; i++){
        random = rand() % (sizeof(letters));
        pwd[i] = letters[random];
    }
    pwd[n + 1] = '\0';
    
    printf("votre mot de passe est: %s", pwd);

    return 0;
}