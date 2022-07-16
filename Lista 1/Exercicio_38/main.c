#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasc, ano_atual, idade;
    printf("Escreva seu ano de nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Escreva o ano atual: ");
    scanf("%d", &ano_atual);
    idade= ano_atual-ano_nasc;
    printf("\nA idade da pessoa em anos eh de: %d", idade);
    printf("\nA idade da pessoa em meses eh de: %d", idade*12);
    printf("\nA idade da pessoa em dias eh de: %d", idade*360);
    printf("\nA idade da pessoa em semanas eh de: %d", idade*360/7);
}
