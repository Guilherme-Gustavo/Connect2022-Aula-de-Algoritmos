#include <stdio.h>
#include <stdlib.h>

int main()
{
   float horas_normais, horas_extras, salario_bruto, salario_liq;
   printf("Escreva o total de horas trabalhadas sem hora extra: ");
   scanf("%f", &horas_normais);
   printf("Escreva o total de horas extras trabalhadas: ");
   scanf("%f", &horas_extras);
   salario_bruto=horas_normais*10+horas_extras*15;
   salario_liq=salario_bruto*0.9;
   printf("O salario bruto total eh de R$ %.2f, e o salario liquido eh de R$ %0.2f", salario_bruto, salario_liq);

}
