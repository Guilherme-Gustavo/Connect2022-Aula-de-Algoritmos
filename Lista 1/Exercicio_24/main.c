#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quant_ref;
    printf("Informe a quantidade total em litros de refresco que deseja preparar: ");
    scanf("%f", &quant_ref);
    printf("A quantidade de agua necessaria eh de %.3f litros e a quantidade necessaria de suco de maracuja necessaria eh de %.3f litros", quant_ref*0.8, quant_ref*0.2);
}
