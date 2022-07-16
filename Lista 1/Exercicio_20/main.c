#include <stdio.h>
#include <stdlib.h>
//Exercicio com enunciado estranho. Não fica claro como fazer o calculo.
int main()
{
    int n_blusas;
    float novelos;
    printf("Escreva a quantidade de blusas produzidas: ");
    scanf("%d", &n_blusas);
    //considerando 1.5 novelos por blusa, temos:
    novelos=n_blusas*1.5;
    printf("A quantidade de novelos gastos para produzir %d blusas eh de %0.2f", n_blusas, novelos);

}
