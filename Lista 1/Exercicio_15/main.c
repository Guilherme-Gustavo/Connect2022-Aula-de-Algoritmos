#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_conta, felipe;
    int carlos, andre;
    printf("Escreva o valor da conta: ");
    scanf("%f", &valor_conta);
    carlos=valor_conta/3;
    andre=valor_conta/3;
    felipe=valor_conta-andre-carlos;
    printf("Os pagamentos sao:");
    printf("\nCarlos = %.2f", (float)carlos);
    printf("\nAndre = %.2f", (float)andre);
    printf("\nFelipe = %.2f", felipe);

}
