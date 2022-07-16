#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    printf("digite o sexo: ");
    scanf("%c", &sexo);
    if(sexo=='f' || sexo=='F')
        printf("o individuo eh mulher");
    else printf("O individuo nao eh mulher");
}
