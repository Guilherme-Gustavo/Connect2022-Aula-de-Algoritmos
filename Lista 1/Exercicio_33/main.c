#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base_maior, base_menor, altura, area;
    printf("Escreva o valor da base maior do trapezio: ");
    scanf("%f", &base_maior);
    printf("Escreva o valor da base menor do trapezio: ");
    scanf("%f", &base_menor);
    printf("Escreva o valor da altura do trapezio: ");
    scanf("%f", &altura);
    area= (base_maior+base_menor)/2*altura;
    printf("A area do trapezio eh de %f unidades quadradas", area);
}
