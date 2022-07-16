#include <stdio.h>
#include <stdlib.h>

int main()
{
   short int nivel;
   float horas, sal;
   printf("Digite o nivel do professor: ");
   scanf("%d", &nivel);
   if (nivel==1 || nivel==2 || nivel==3){
   printf("Digite a quantidade de horas: ");
   scanf("%f", &horas);
   if (nivel==1)
    printf ("O salario recebido pelo professor eh de: R$%.2f ", 12*horas*4.5);
   else if (nivel==2)
    printf ("O salario recebido pelo professor eh de: R$%.2f ", 17*horas*4.5);
   else if (nivel==3)
    printf ("O salario recebido pelo professor eh de: R$%.2f ", 25*horas*4.5);
   } else
   printf("Nivel nao contemplado na escola");
}
