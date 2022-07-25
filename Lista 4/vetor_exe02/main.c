#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n=20, n_pares=0, n_impares=0, maiorq50=0, menorq7=0, vetor[n];
    for (int i=0; i<n; i++){
        printf("Escreva o %dº valor do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i=0; i<n; i++){
        if (vetor[i]%2 == 0){
            n_pares+=1;
        } else
            n_impares+=1;
        if (vetor[i]>50)
            maiorq50+=1;
        if (vetor[i]<7)
            menorq7+=1;
    }
    printf ("\nA quantidade de pares é de: %d ", n_pares);
    printf ("\nA quantidade de ímpares é de: %d", n_impares);
    printf ("\nA quantidade de números maior que 50 é de: %d", maiorq50);
    printf ("\nA quantidade de números menores que 7 é de: %d", menorq7);
}
