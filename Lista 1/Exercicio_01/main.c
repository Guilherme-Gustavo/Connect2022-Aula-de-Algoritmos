#include <stdio.h>
#include <stdlib.h>
//Exercicio 01 da lista. imobiliária

int main()
{
    float largura, comprimento;
    printf("Digite a largura do terreno ");
    scanf("%f", &largura);
    printf("\nDigite o comprimento do terreno ");
    scanf("%f", &comprimento);
    printf("\nA area do terreno eh de %0.2f unidades quadradas", largura*comprimento);
}
