#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, maior=0;
    for (int i=1;i<=20;i++){
        printf("Escreva a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        if (idade>=18)
            maior=maior+1;
    }
    printf("O numero de pessoas maiores de idade sao: %d", maior);
}
