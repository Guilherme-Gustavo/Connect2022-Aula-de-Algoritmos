#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanduiche;
    float queijo, presunto, hamburger;
    printf("Digite o numero de sanduiches que deseja fazer: ");
    scanf("%d", &sanduiche);
    queijo=2*sanduiche*0.05;
    presunto=1*sanduiche*0.05;
    hamburger=1*sanduiche*0.1;
    printf("As quandidades a serem compradas sao:");
    printf("\nQueijo = %0.3fkg", queijo);
    printf("\nPresunto = %0.3fkg", presunto);
    printf("\nCarne = %0.3fkg", hamburger);
}
