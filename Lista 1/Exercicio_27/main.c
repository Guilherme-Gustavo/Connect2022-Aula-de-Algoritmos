#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2;
    printf("Escreva o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Escreva o segundo numero: ");
    scanf("%lf", &n2);
    printf("A divisao de %lf por %lf eh de %lf", n1, n2, n1/n2);
}
