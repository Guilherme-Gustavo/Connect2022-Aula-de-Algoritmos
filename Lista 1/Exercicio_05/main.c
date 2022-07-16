#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, pagamento;
    printf("Escreva o preco do litro da gasolina: ");
    scanf("%f", &preco);
    printf("\nEscreva o valor em reais que sera pago: ");
    scanf("%f", &pagamento);
    printf("A quantidade de litros de gasolina abastecidos com o pagamento fornecido eh de %.03f litros.", pagamento/preco);
}
