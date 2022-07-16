#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dia, mes, t_decorrido;
  printf("Digite o numero do mes atual: ");
  scanf("%d", &mes);
  printf("Digite o dia atual: ");
  scanf("%d", &dia);
  t_decorrido=dia+mes*30;
  printf("Desde o inicio do ano se passaram %d dias", t_decorrido);
}
