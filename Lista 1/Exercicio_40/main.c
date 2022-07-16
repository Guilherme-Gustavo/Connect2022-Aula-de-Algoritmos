#include <stdio.h>
#include <stdlib.h>
#include <math.h>>
int main()
{
   float cateto1, cateto2, hipotenusa;
   printf("Digite o valor do primeiro cateto do triangulo: ");
   scanf("%f", &cateto1);
   printf("Digite o valor do segundo cateto do triangulo: ");
   scanf("%f", &cateto2);
   hipotenusa= pow(pow(cateto1,2)+pow(cateto2,2),0.5);
   printf("A hipotenusa do triangulo eh de %f", hipotenusa);
}
