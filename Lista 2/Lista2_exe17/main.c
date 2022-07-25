#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int codigoProduto, quantidade;
    setlocale(LC_ALL,"portuguese");
    printf("-------------Cardápio---------------\n");
    printf("Código       Produto           Preço\n");
    printf("------------------------------------\n");
    printf("   1     Cachorro Quente     R$11,00\n");
    printf("   2          Bauru          R$ 8,50\n");
    printf("   3       Misto Quente      R$ 8,00\n");
    printf("   4        Hamburger        R$ 9,00\n");
    printf("   5       Cheeseburger      R$10,00\n");
    printf("   6       Refrigerante      R$ 4,50\n");
    printf("------------------------------------\n");

    printf("\nDigite o código do produto desejado: ");
    scanf("%d", &codigoProduto);
    printf("Digite a quantidade do produto desejado: ");
    scanf("%d", &quantidade);
    switch (codigoProduto){
    case 1:
        printf("\nSeu pedido foi de %d cachorros quentes no valor de R$%.2f.", quantidade, quantidade*11.00);
    break;
    case 2:
        printf("\nSeu pedido foi de %d baurus no valor de R$%.2f.", quantidade, quantidade*8.50);
    break;
    case 3:
        printf("\nSeu pedido foi de %d misto quentes no valor de R$%.2f.", quantidade, quantidade*8.00);
    break;
    case 4:
        printf("\nSeu pedido foi de %d hambúrgueres no valor de R$%.2f.", quantidade, quantidade*9.00);
    break;
    case 5:
        printf("\nSeu pedido foi de %d cheeseburgueres no valor de R$%.2f.", quantidade, quantidade*10.00);
    break;
    case 6:
        printf("\nSeu pedido foi de %d refrigerantes no valor de R$%.2f.", quantidade, quantidade*4.50);
    break;
    default:
        printf("\nErro na solicitação: Produto não cadastrado. Pedido não realizado.");

    }
    printf("\n---------------------------------------------------------------------\n");


}
