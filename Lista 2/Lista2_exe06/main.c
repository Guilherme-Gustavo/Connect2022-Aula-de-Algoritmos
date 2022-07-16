#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3, aux;
    printf("Escreva o primeiro numero: ");
    scanf("%d", &n1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &n2);
    printf("Escreva o terceiro numero: ");
    scanf("%d", &n3);
    aux=0;
    if(n1==n2 || n1==n3 || n2==n3)
        printf("Valores invalidos pois os numeros nao sao diferentes. Por favor, informe numeros diferentes");
    else{
    if(n1<n2){
        aux=n1;
        n1=n2;
        n2=aux;
    }
    if(n1<n3){
        aux=n1;
        n1=n3;
        n3=aux;
    }
    if(n2<n3){
        aux=n2;
        n2=n3;
        n3=aux;
    }

    printf("Os valores em ordem decrescente sao %d, %d, %d", n1,n2,n3);}
}
