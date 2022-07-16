#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,numero_inicial, numero_final, n, soma=0;
    printf ("Escreva o numero inicial do intervalo: ");
    scanf ("%d", &numero_inicial);
    printf ("Escfeva o numero final do intervalo: ");
    scanf ("%d", &numero_final);

    n=numero_final-numero_inicial;

    for (i=numero_inicial;i<=numero_final; i++){

       soma=soma+i;
    }
    printf("A soma eh %d: ", soma);
}
