#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1,lado2,lado3;
    printf("Escreva o valor do primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Escreva o valor do segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Escreva o valor do terceiro lado do triangulo: ");
    scanf("%f", &lado3);
    if (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2)
    {
        printf("Os valores para os lados formam um triangulo valido\n");
        if (lado1==lado2 &&lado1==lado3 && lado2==lado3)
            printf("O triangulo eh equilatero");
        else if (lado1==lado2 || lado1==lado3 || lado2==lado3)
            printf("O triangulo eh isosceles");
        else if (lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
            printf("O triangulo eh escaleno");
    }
    else
        printf("Os valores para os lados nao formam um triangulo");

}
