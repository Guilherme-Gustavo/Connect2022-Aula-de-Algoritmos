#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int R[5], A[10], pontos=0;
    printf("Digite o gabarito da Loto:\n");
    for (int i=0; i<5;i++){
        printf("%dª dezena: ", i+1);
        scanf("%d", &R[i]);
    }
    printf("\nDigite as dezenas marcadas pelo apostador:\n");
    for (int i=0; i<10; i++){
        printf("%dª dezena: ", i+1);
        scanf("%d", &A[i]);
    }

    for (int i=0; i<5; i++){
        for (int j=0; j<10; j++){
            if (R[i]==A[j]){
                pontos+=1;
            }
        }
    }
     printf("\nO apostador acertou: %d dezenas", pontos); //este exercício está desenvolvido para que não haja repetições de valores digitados no gabarito e na aposta, ou seja, os 5 valores do gabarito devem ser digitados diferentes bem como os 10 valores da aposta tambem devem ser diferentes entre si.
}
