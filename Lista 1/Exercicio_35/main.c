#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calculo atraves da inserção das diagonais:
    float diag_maior, diag_menor;
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diag_maior);
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diag_menor);
    printf("A area do losango eh de %f unidades quadradas", diag_maior*diag_menor/2);
}
