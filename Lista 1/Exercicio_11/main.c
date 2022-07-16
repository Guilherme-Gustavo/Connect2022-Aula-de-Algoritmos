#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dias, meses, anos, dias_entrada;
   printf("Digite o numero de dias sem acidentes: ");
   scanf("%d", &dias_entrada);
   anos= dias_entrada/360;
   meses=(dias_entrada-(anos*360))/30;
   dias=dias_entrada-(anos*360+meses*30);
   printf("O numero de anos sem acidentes eh de %d", anos);
   printf("\nO numero de meses sem acidentes eh de %d", meses);
   printf("\nO numero de dias sem acidentes eh de %d", dias);
}
