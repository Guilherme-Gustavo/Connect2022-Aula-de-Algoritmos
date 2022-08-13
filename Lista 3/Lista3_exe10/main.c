#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, N_par;
    for (int i=1; i<=20; i++){
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);
        if (numero%2==0) //considerei o número 0 como par, mas é possível fazer um if contando quantas vezes o 0 é digitado e tratá-lo como neutro. Assim, ele não entra no somatório de pares.
            N_par+=1; //testando esta maneira de somar o acumulador ao invés de N_par=Npar+1
    }
     printf("A quantidade de números pares é de %d", N_par);
}
