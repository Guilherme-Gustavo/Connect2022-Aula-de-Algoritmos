#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero[10], maior, menor, i, pos_maior=0, pos_menor=0 ;
    for (i=0; i<10; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &numero[i]);
    }
    menor=numero[0];
    maior=numero[0];
    for(i=0; i<10; i++){
        if(numero[i]<menor){
            menor=numero[i];
            pos_menor=i+1;
        }
        if(numero[i]>maior){
            maior=numero[i];
            pos_maior=i+1;
        }
    }
    printf("A maior idade é %d na posição %d e a menor é %d na posição %d", maior, pos_maior, menor, pos_menor);
}
