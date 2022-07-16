#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int idade, dias;
    printf("Digite o nome da pessoa: ");
    scanf("%s",&nome);
    printf("\nDigite a idade da pessoa em anos completos: ");
    scanf("%d", &idade);
    dias= idade*365;
    printf("%s, voce ja viveu %d dias", nome, dias);

}
