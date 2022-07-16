#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_funcionario, salario_minimo, quant_sal_min;
    printf("Escreva o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Escreva o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);
    quant_sal_min= salario_funcionario/salario_minimo;
    printf("O funcionario ganha %f salarios minimos", quant_sal_min);
}
