#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i=2, idade, menor_idade;
    char nome[30], nome_menor[30];
    printf("Escreva o nome da pessoa 1: ");
    scanf ("%s", &nome_menor);
    printf("Escreva a idade da pessoa 1: ");
    scanf("%d", &menor_idade);
    do {
    printf("Escreva o nome da pessoa %d: ",i);
    scanf ("%s", &nome);
    printf("Escreva a idade da pessoa %d: ",i);
    scanf("%d", &idade);
    if (idade<menor_idade){
        menor_idade=idade;
        strcpy(nome_menor,nome); //teste de uma fun��o para passar valor de string de uma para outra vari�vel, ou seja, nome_menor recebe valor de nome caso este nome seja referente � pessoa mais jovem
    }
    i++;
    }while(i<=10);
    printf("A pessoa mais jovem � %s com a idade de %d anos", nome_menor, menor_idade);
    }
