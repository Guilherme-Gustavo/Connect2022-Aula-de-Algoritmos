#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, centenas, dezenas, unidades;
    printf("Digite um numero com ate 3 casas: ");
    scanf("%d", &numero);
    centenas=numero/100;
    dezenas=(numero-centenas*100)/10;
    unidades=numero-centenas*100-dezenas*10;
    printf("CENTENAS = %d", centenas);
    printf("\nDEZENAS = %d", dezenas);
    printf("\nUNIDADES = %d", unidades);
}
