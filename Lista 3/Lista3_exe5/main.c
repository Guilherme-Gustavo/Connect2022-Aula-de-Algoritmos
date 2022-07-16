#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n,soma=0;
    for (int i=1;i<=10;i++){
        printf("Escreva o %dº número: ", i);
        scanf ("%f", &n);
        soma=soma+n;
    }
    printf("A soma dos 10 números é de: %f", soma);
}
