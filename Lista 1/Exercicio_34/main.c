#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado;
    printf("Escreva o valor do lado do quadrado: ");
    scanf("%f", &lado);
    printf("A area do quadrado eh de %f unidades quadradas", pow(lado,2));
}
