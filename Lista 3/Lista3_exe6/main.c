#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,soma;
    for (int i=1;i<=20; i++){
        printf("Digite a idade da pessoa %d: ",i);
        scanf("%d", &idade);
        soma=soma+idade;
    }
    printf("A media das idades eh de %.2f ", soma/20.0);
}
