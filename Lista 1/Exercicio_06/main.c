#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, pagamento;
    printf("Escreva o peso de seu prato de refeicao em kg: ");
    scanf("%f", &peso);
    pagamento=peso*12.00;
    printf("\nO valor a ser pago pelo prato eh de %0.2f reais ", pagamento);
}
