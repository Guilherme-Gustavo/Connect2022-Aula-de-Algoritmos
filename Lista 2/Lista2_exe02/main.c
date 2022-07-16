#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero n: ");
    scanf("%d", &n);
    if (n%2==0)
        printf("O numero n eh par");
    else
        printf("o numero eh impar");
}
