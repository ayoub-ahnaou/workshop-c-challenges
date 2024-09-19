#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char jours[][10] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};

    printf("choisiz un jour de ces jour là: \n");
    for (int i = 0; i < 7; i++)    {
        printf("-%s\n", jours[i]);
    }
    char choix[10];
    
    printf("entre votre choix: ");
    scanf("%s", choix);

    int pos = -1;
    for (int i = 0; i < 7; i++)    {
        if (strcmp(choix, jours[i]) == 0)        {
            pos = i;
            break;
        }
    }
    if (pos != -1)    {
        for (int i = pos; i < 7; i++)
            printf("%s, ", jours[i]);
    }
    else     {
        printf("choix non valid..");
    }

    return 0;
}