#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n_anel_chip, n_anel_alimento, n_frango;
    float gasto;
    printf("Escreva a quantidade de frangos da granja: ");
    scanf("%d", &n_frango);
    n_anel_chip=4*n_frango;
    n_anel_alimento=2*3.50*n_frango;
    gasto= n_anel_alimento+n_anel_chip;
    printf("O custo total da granja para marcar todos os frangos eh de R$ %0.2f", gasto);
}
