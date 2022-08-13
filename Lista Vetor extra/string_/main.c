#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[15];
    int posicao=0;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    for (int i=0; i<15; i++){
        if (nome[i]=='\0'){
            posicao=i;
            break;
        }
    }
    printf("O tamanho do nome eh: %d", posicao);
}
