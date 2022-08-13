#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double fatorial(int n);

int main()
{
    int n;
    double resultado;
    setlocale(LC_ALL,"portuguese");
    printf("Digite um numero menor que 20 para ser calculado o fatorial: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("O valor do fatorial de %d é de: %.0lf", n, resultado);
}


double fatorial(int n){
    double fat=1;
    if(n<=0)
        return 1;
    else{
    for (int i=1; i<=n;i++){
        fat = (fat *i);
    }
    return fat;
    }


}
