#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int pequena, media, grande, valor;
    printf("Informe a quantidade de camisetas de tamanho pequeno vendidas: ");
    scanf("%u", &pequena);
    printf("Informe a quantidade de camisetas de tamanho medio vendidas: ");
    scanf("%u", &media);
    printf("Informe a quantidade de camisetas de tamanho grande vendidas: ");
    scanf("%u", &grande);
    valor=pequena*10 + media* 12 + grande* 15;
    printf("O valor arrecadado foi de %d reais", valor);
}
