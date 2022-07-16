#include <stdio.h>
#include <stdlib.h>

int main()
{
    int latas, garrafas600, garrafas2L;
    float volume;
    printf("Digite a quantidade de latas de 350mL compradas: ");
    scanf("%d", &latas);
    printf("Digite a quantidade de garrafas de 600mL compradas: ");
    scanf("%d", &garrafas600);
    printf("Digite a quantidade de garrafas de 2L compradas: ");
    scanf("%d", &garrafas2L);
    volume= 0.350*latas+0.600*garrafas600+2*garrafas2L;
    printf("O volume total em litros de refrigerantes ccomprados eh de %.3fL", volume);
}
