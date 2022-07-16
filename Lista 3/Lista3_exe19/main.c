#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=1;
    float menor, maior, altura;
    printf("Digite a altura da %dª pessoa em metros: ",i);
    scanf("%f", &altura);
    menor=altura;
    maior=altura;
       for(i=2;i<=15;i++){
         printf("Digite a altura da %dª pessoa: ",i);
         scanf("%f", &altura);
         if (altura<=menor)
            menor=altura;
         if (altura>=maior)
            maior=altura;
       }
       printf("A maior altura é: %.2fm\n", maior);
       printf("A menor altura é: %.2fm\n", menor);
}

