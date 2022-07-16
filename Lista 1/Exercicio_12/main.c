#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_ini, salario_aumento, salario_final;
    printf("Digite o salario inicial do funcionario: ");
    scanf("%f", &salario_ini);
    salario_aumento=salario_ini*1.15;
    salario_final=salario_aumento*0.92;
    printf("O salario inicial eh de R$%.2f.\nO salario com aumento eh de R$%.2f.\nO salario com desconto eh de R$%.2f", salario_ini, salario_aumento, salario_final);

}
