#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nome[20];
   printf("Digite seu nome: ");
   scanf("%s", &nome);
   for(int i=1;i<=10; i++)
    printf("%s\n", nome);
}
