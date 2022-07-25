#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int D[10], Resultado[10], posicao=0;
    for (int i=0;i<10; i++){
        printf("Escreva o valor D[%d] do vetor D: ", i);
        scanf("%d", &D[i]);
    }
    for (int i=0; i<10; i++){
        if (D[i]>0){
            Resultado[posicao]=D[i];
            posicao+=1;
        }
    }
    printf("\nO vetor resultante é:\n");
    if (posicao==0)
        printf ("vazio");
    else
    for (int i=0; i<posicao; i++){
        printf("D[%d] = %d\n", i, Resultado[i] );
    }

}
