#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int R[5], S[10], X[5], passo_de_X=0;
    printf("Primeiramente, digite os valores do vetor de 5 posições:\n");
    for (int i= 0; i<5; i++){
        printf("Digite o valor de R[%d]: ",i);
        scanf("%d", &R[i]);
    }
    printf("\n"); // pula linha para facilitar para o usuário alimentar os dois vetores separadamente.
    printf("Agora, digite os valores do vetor de 10 posições:\n");
    for (int i=0; i<10; i++){
        printf("Digite o valor de S[%d]: ",i);
        scanf("%d", &S[i]);
    }

    //abaixo as comparações de valores:
    for (int j=0; j<5; j++){
        for (int i=0; i<10; i++){
            if (R[j]==S[i]){
              X[passo_de_X]=R[j];
              passo_de_X+=1;
              continue;
            }

        }
    }
     printf("\nO vetor de valores iguais X é:\n");
         if (passo_de_X==0){
            printf("vazio, não contém elementos!\n");
         } else{
          for (int i=0;i<passo_de_X;i++){
         printf("X[%d]=%d\n", i, X[i]);
     }
         }
}
