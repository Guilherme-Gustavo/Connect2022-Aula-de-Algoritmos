#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("O preco do produto com um desconto de 10%% eh de: %.2f", preco*.9);
}
