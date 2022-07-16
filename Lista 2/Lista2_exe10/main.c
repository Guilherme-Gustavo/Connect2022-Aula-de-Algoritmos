#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2;
   printf("Digite o primeito numero: ");
   scanf("%d", &n1);
   printf("Digite o segundo numero: ");
   scanf("%d", &n2);
   if (n1>n2)
    printf("A diferenca entre %d e %d eh: %d", n1,n2, n1-n2);
   else if(n2>n1)
    printf("A diferenca entre %d e %d eh: %d",n2,n1, n2-n1);
   else
    printf("Os numeros sao iguais e a diferenca eh 0");
}
