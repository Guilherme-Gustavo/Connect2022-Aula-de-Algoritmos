#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char nome[20];
    printf("Escreva seu nome: ");
    scanf ("%s", &nome);
    printf("Escreva quantas vezes quer que seu nome seja escrito: ");
    scanf ("%d", &n);
    for (int i=1;i<=n;i++)
        printf("%s\n", nome);
}
