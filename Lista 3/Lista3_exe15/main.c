#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double numero, fatorial=1;
    printf("Digite um n�mero para ser calculado o valor de seu fatorial: ");
    scanf("%lf", &numero);
    for (double i=numero; i>=1; i--)
        fatorial = fatorial *i;
    printf("O valor do fatorial �: %lf ", fatorial);

}
