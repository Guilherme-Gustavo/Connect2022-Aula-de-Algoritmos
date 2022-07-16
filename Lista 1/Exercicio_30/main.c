#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario, vendas;
   printf("Digite o valor do salario base recebido pelo funcionario: ");
   scanf("%f", &salario);
   printf("Digite o valor de vendas realizadas pelo funcionario: ");
   scanf("%f", &vendas);
   printf("A comissao recebida pelo funcionario eh de %.2f reais e o salario final eh de %.2f reais", vendas*0.04, salario+vendas*0.04);
}
