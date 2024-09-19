#include <stdio.h>

int main(){
    float km_par_heure;
    float m_par_second;

    printf("entrer la vittese en km/h: ");
    scanf("%f", &km_par_heure);

    m_par_second = km_par_heure * 0.27778;

    printf("m/s = %.2f", m_par_second);

    return 0;
}