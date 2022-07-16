#include <stdio.h>
#include <stdlib.h>

int main()
{
   //F = (°C x 1,8) + 32
   float T_C, T_F;
   printf("Digite a temperatura em graus celcius: ");
   scanf("%f", &T_C);
   T_F= (T_C*1.8)+32;
   printf("A temperatura em graus Fahrenheit eh de %0.2f", T_F);
}
