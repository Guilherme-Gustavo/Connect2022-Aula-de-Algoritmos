#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura_humana, sombra_humana, altura_predio, sombra_predio;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura_humana);
    printf("Digite o tamanho de sua sombra em metros: ");
    scanf("%f", &sombra_humana);
    printf("Digite o tamanho da sombra do predio em metros: ");
    scanf("%f", &sombra_predio);
    altura_predio= altura_humana/sombra_humana*sombra_predio;
    printf("A altura do predio em metros eh de %.2f", altura_predio);
}
