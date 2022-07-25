#include <stdio.h>
#include <stdlib.h>

int main()
{
   float saldo_medio, credito;

   printf("Escreva o saldo medio do cliente: ");
   scanf("%f", &saldo_medio);
   if (saldo_medio>=0 && saldo_medio<=200){
    credito=saldo_medio*0;
    printf("O saldo medio eh de R$%.2f e o credito eh R$%.2f", saldo_medio, credito);
   }
   else if (saldo_medio>200 && saldo_medio<=400){
    credito=saldo_medio*0.2;
    printf("O saldo medio eh de R$%.2f e o credito eh R$%.2f", saldo_medio, credito);
   }
    else if (saldo_medio>400 && saldo_medio<=600){
     credito=saldo_medio*.3;
     printf("O saldo medio eh de R$%.2f e o credito eh R$%.2f", saldo_medio, credito);
   }
    else if (saldo_medio>600){
        credito=saldo_medio*.4;
        printf("O saldo medio eh de R$%.2f e o credito eh R$%.2f", saldo_medio, credito);
    }
    else
        printf("Saldo negativo. Credito nao contemplado");

}
