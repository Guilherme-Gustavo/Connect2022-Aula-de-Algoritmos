#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci_maior(int n);

int main()
{
    int n, maior;
    setlocale(LC_ALL,"portuguese");
    printf("Digite um número para que seja informado o primeiro valor da sequência Fibonacci que é maior que este número: ");
    scanf("%d", &n);
    maior=fibonacci_maior(n);
    printf("O primeiro valor maior que %d é: %d.", n, maior);
}



int fibonacci_maior(int n){
    int a0=0, a1=1, aux0, aux1;
    do{
        aux0=a0;
        aux1=a1;
        a1=aux1+aux0;
        a0=aux1;
    }while(n>a1);
    return a1;
}
