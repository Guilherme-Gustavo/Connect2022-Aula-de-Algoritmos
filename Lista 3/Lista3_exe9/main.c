#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    int N_maiores=0;
    for(int i=1; i<=20; i++){
    printf("Informe o %dº número: ", i);
    scanf ("%f", &numero);
        if (numero>8){
            N_maiores=N_maiores+1;
        }
    }
    printf("A quantidade de números maiores que 8 é de %d", N_maiores);
}
