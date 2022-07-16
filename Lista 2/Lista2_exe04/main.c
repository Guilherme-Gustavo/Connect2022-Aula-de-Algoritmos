#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    if(n>0)
        printf("O dobro do numero eh %f", n*2);
    else if(n<0)
        printf("O triplo do numero eh %f", n*3);
    else
        printf("O numero eh zero");
}
