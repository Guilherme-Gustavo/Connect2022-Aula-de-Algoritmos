#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int codigo, quantidade_total=0, quantidade=0, preco=0, preco_total=0;
    printf("Abaixo temos a tabela de preço dos produtos vendidos:\n");
    printf("1 - Arroz      R$25,00\n");
    printf("2 - feijão     R$ 7,00\n");
    printf("3 - Óleo       R$ 9,00\n");
    printf("4 - Azeite     R$20,00\n");
    printf("5 - Mamão 1kg  R$12,00\n");
    printf("6 - Carne 1kg  R$26,00\n");
    printf("7 - sal        R$ 2,00\n");

    printf("Digite o código do produto comprado. Caso não esteja listado de 1 a 7, a compra estará encerrada: ");
    scanf("%d", &codigo);

    while (codigo>0 && codigo<=7){
        printf("Digite a quantidade comprada do produto: ");
        scanf("%d", &quantidade);
        switch (codigo){
        case 1: preco=25*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 2: preco=7*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 3: preco=9*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 4: preco=20*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 5: preco=12*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 6: preco=26*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;

        case 7: preco=2*quantidade;
                preco_total=preco_total+preco;
                quantidade_total=quantidade_total+quantidade;
        break;
        }

        printf("Digite o código do próximo produto comprado: ");
        scanf("%d", &codigo);

}
        printf("\nO custo total de %d produtos foi de R$%d:\n", quantidade_total, preco_total);
}
