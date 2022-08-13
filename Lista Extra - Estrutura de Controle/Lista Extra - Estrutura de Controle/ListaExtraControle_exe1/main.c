#include <stdio.h>
#include <stdlib.h>

int lernumero(int numero, char N);
void maior_numero(int a, int b, int c);
void menor_numero(int a, int b, int c);
void tabuadas(int n, int m);
void divisivel(int n, int m);

int main()
{
    int m, n, o;

    /*printf("Programa para calcular varias\n\n");
    m = lernumero(m, 'm');
    n = lernumero(n, 'n');
    o = lernumero(o, 'o');

    maior_numero(m,n,o);
    menor_numero(m,n,o);

    printf("Programa para calcular tabuada\n\n");
    printf("Digite os valores dos numeros tal que n x m, com n variando de 2 a 9 e m maior que 1: \n");
    do{
        n= lernumero(n, 'n');
        if (n<2 || n>9)
            printf("Valor fora do intervalo pedido.\n");
    }while (n<2 || n>9);
        m= lernumero(m, 'm');

    tabuadas(n,m);

    printf("Programa para calculo dos divisores: o programa vai verificar entre os numeros \n1 e 200 quais serao divisiveis por 'n' e nao serao por 'm'\n\n");
    n = lernumero (n, 'n');
    m = lernumero (m,'m');

    divisivel(n,m); */

    printf("calculo do log de um numero 'n':\n\n");
    n = lernumero(n,'n');


}

int lernumero(int numero, char N){
    printf("Digite o numero %c: ", N);
    scanf("%d", &numero);
    printf("\n");
    return numero;
}

void maior_numero(int a, int b, int c){

    if (a>=b && a>=c)
        printf("\nO maior numero eh %d\n", a);
    if (b>=a && b>=c)
        printf("\nO maior numero eh %d\n", b);
    if (c>=a && c>=b)
        printf("\nO maior numero eh %d\n", c);

}

void menor_numero(int a, int b, int c){

    if (a<=b && a<=c)
        printf("\nO maior numero eh %d\n", a);
    if (b<=a && b<=c)
        printf("\nO maior numero eh %d\n", b);
    if (c<=a && c<=b)
        printf("\nO maior numero eh %d\n", c);

}

void tabuadas(int n, int m){
    for(int i=0; i<=m;i++)
        printf("%d x %d = %d\n",n,i,n*i);
}

void divisivel(int n, int m){
    for(int i=0; i<=200; i++){
       if (i%n==0 && i%m!=0)
            printf("%d\n", i);
    }

}

void logaritmo(int n){
    int resto=n;
    for ()

}
