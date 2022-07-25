#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int codigoFuncionario;
    float salario;
    printf("Codigo 101 para Gerente;\n");
    printf("Codigo 102 para Engenheiro;\n");
    printf("Codigo 103 para Gerente;\n");
    printf("\"Código qualquer\" para outro cargo;\n");

    printf("Digite o código do cargo do funcionário presente na tabela: ");
    scanf("%d", &codigoFuncionario);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (codigoFuncionario==101){
        printf("\nO salário do gerente antes do aumento era de R$%.2f e agora, com o aumento de 10%% é de R$%.2f.", salario, salario*1.1);
    } else if (codigoFuncionario==102){
        printf("\nO salário do engenheiro antes do aumento era de R$%.2f e agora, com o aumento de 20%% é de R$%.2f.", salario, salario*1.2);
    } else if (codigoFuncionario==103){
        printf("\nO salário do técnico antes do aumento era de R$%.2f e agora, com o aumento de 30%% é de R$%.2f.", salario, salario*1.3);
    } else
    printf("\nO salário deste funcionário era de R$%.2f antes do aumento e agora, com o aumento de 40%% é de R$%.2f.", salario, salario*1.4);

}
