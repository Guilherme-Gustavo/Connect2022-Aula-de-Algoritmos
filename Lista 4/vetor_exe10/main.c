#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n, vetor[50], aux, ordem;
    printf ("Quantos números deseja que sejam ordenados? Válidos de 2 a 50: ");
    scanf("%d" ,&n);
    for (int i=0; i<n; i++){
        printf("Digite o valor de vetor[%d]: ",i);
        scanf("%d", &vetor[i]);
    }
    printf("Deseja que sejam ordenados em ordem crescente ou decrescente? Digite 1 para crescente e 2 para decrescente. Qualquer valor diferente não modificará a ordem de seu vetor: ");
    scanf("%d", &ordem);

    if(ordem==1){
    for (int i=0; i<(n); i++){
        for (int j=(i+1); j<n; j++)
            if (vetor[i]>=vetor[j]){
                aux=vetor[j];
                vetor[j]=vetor[i];
                vetor[i]=aux;
        }
    }
    printf("\nO vetor ordenado em ordem crescente é: \n");
    for (int i=0; i<n;i++){
        printf("Vetor[%d]=%d\n", i, vetor[i]);
    }
    }
    if(ordem==2){
    for (int i=0; i<(n); i++){
        for (int j=(i+1); j<n; j++)
            if (vetor[i]<=vetor[j]){
                aux=vetor[j];
                vetor[j]=vetor[i];
                vetor[i]=aux;
        }
    }
    printf("\nO vetor ordenado em ordem decrescente é: \n");
    for (int i=0; i<n;i++){
        printf("Vetor[%d]=%d\n", i, vetor[i]);
    }
    }
    else if (ordem!=1 && ordem!=2){
        printf("O vetor não será ordenado\n");
        for (int i=0; i<n;i++){
        printf("Vetor[%d]=%d\n", i, vetor[i]);
    }
}
}
