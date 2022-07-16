#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distancia;
    printf("Escreva o valor de x para o ponto 1: ");
    scanf("%f", &x1);
    printf("Escreva o valor de y para o ponto 1: ");
    scanf("%f", &y1);
    printf("Escreva o valor de x para o ponto 2: ");
    scanf("%f", &x2);
    printf("Escreva o valor de y para o ponto 2: ");
    scanf("%f", &y2);
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1, 2));
    printf("A distância entre os dois pontos eh de %f", distancia);
}
