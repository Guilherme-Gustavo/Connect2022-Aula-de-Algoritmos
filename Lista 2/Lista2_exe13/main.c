#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, diferenca, nota100, nota50, nota10, nota5, nota1;
    printf("Digite o valor em reais a ser decomposto: ");
    scanf("%d", &valor);
    nota100 = valor/100;
    nota50 = (valor-nota100*100)/50;

    nota10 = (valor-nota100*100-nota50*50)/10;
    nota5 = (valor-nota100*100-nota50*50-nota10*10)/5;
    nota1 = (valor-nota100*100-nota50*50-nota10*10-nota5*5);

    printf("O menor numero de notas de 100 eh: %d\n", nota100);
    printf("O menor numero de notas de 50 eh: %d\n", nota50);
    printf("O menor numero de notas de 10 eh: %d\n", nota10);
    printf("O menor numero de notas de 5 eh: %d\n", nota5);
    printf("O menor numero de notas de 1 eh: %d\n", nota1);
}
