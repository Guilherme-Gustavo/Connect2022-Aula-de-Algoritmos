#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    int n_0a100=0;
    for (int i=1;i<=20; i=i+1){
        printf("Escreva o %dº número: ", i);
        scanf("%f", &numero);
        if(numero>=0 && numero<=100) //intervalo fechado, ou seja, considera os extremos 0 e 100
            n_0a100 +=1;
    }
    printf("A quantidade de números entre 0 e 100 é de: %d", n_0a100);
}
