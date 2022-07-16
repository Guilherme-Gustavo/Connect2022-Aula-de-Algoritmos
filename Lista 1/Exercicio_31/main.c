#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    printf("Digite o peso da pessoa em kg: ");
    scanf("%f", &peso);
    printf("Se a pessoa engordar 15%% de seu peso, seu peso final sera de %.3f kg", peso*1.15);
    printf("\nSe a pessoa emagrecer 20%% de seu peso, seu peso final sera de %.3f kg", peso*0.8);
}

