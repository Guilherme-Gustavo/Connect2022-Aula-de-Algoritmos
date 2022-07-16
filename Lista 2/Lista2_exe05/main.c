#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n%2==0)
        printf("O numero eh par e a soma dele com 5 eh: %d", n+5);
    else if (n%2!=0)
        printf("O numero eh impar e a soma dele com 8 eh: %d", n+8);
}
