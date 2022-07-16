#include <stdio.h>
#include <stdlib.h>

int main()
{
 int paes, broas;
 float faturamento, poupanca;
 printf("Digite o numero de paezinhos vendidos: ");
 scanf("%d", &paes);
 printf("Digite o numero de broas vendidas: ");
 scanf("%d", &broas);
 faturamento=paes*0.12+broas*1.50;
 poupanca=faturamento*0.1;
 printf("O faturamento total foi de %0.2f e a quantia a ser guardada na poupanca eh de %.2f", faturamento, poupanca);
}
