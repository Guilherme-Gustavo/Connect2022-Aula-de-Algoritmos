#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, N_par;
    for (int i=1; i<=20; i++){
        printf("Digite o %d� n�mero inteiro: ", i);
        scanf("%d", &numero);
        if (numero%2==0) //considerei o n�mero 0 como par, mas � poss�vel fazer um if contando quantas vezes o 0 � digitado e trat�-lo como neutro. Assim, ele n�o entra no somat�rio de pares.
            N_par+=1; //testando esta maneira de somar o acumulador ao inv�s de N_par=Npar+1
    }
     printf("A quantidade de n�meros pares � de %d", N_par);
}
