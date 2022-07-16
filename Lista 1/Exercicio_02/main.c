#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cavalos;
    printf("Quantos cavalos o haras possui? ");
    scanf("%d", &cavalos);
    printf("Sao necessarias %d ferraduras para equipar todos os cavalos", 4*cavalos);
}
