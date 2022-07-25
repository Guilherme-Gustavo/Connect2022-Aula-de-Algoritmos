#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ano;
    float valor, imposto;
    printf("Informe o ano de fabricacao do veiculo: ");
    scanf("%u", &ano);
    printf("Informe o valor de tabela dele: ");
    scanf("%f", &valor);
    if (ano<1990)
        printf("O valor do imposto a ser pago eh de R$%0.2f", valor*1/100);
    else
        printf("O valor do imposto a ser pago eh de R$%0.2f", valor*1.5/100);
}
