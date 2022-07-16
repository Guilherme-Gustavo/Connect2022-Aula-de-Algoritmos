#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int quilometragem, numero_da_parada=2;
    printf("Digite a quilometragem percorrida desde o início da viagem até a 1ª parada: ");
    scanf("%d", &quilometragem);
    printf("A quilometragem percorrida até agora é de: %dkm\n", quilometragem);

    for (int i=quilometragem; i<4000;){
        printf("Digite a quilometragem percorrida desde a parada anterior até a parada atual: ");
        scanf("%d", &quilometragem);
        i=i+quilometragem;
        printf("\nA quilometragem percorrida até agora é de: %dkm\n", i);
    }
}
