#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int vet1[10], vet2[10], soma[10];
    for (int i=0; i<10 ; i++){
        printf("Digite o valor %d do vetor 1: ", i);
        scanf("%d", &vet1[i]);
    }
    for (int i=0; i<10 ; i++){
        printf("\nDigite o valor %d do vetor 2: ", i);
        scanf("%d", &vet2[i]);
    }
    for (int i=0; i<10 ; i++){
        soma[i]=vet1[i]+vet2[i];
        printf("\nO vetor soma é Soma[%d] = %d", i+1,soma[i]);
    }


    }

