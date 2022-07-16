#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso_kg;
    int peso_g;
    printf("Escreva seu peso em quilogramas: ");
    scanf("%f", &peso_kg);
    peso_g=peso_kg*1000;
    printf("O peso da pessoa em gramas eh de %d gramas", peso_g);
}
