#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    printf("Escreva um numero A: ");
    scanf("%d", &A);
    printf("Escreva um numero B: ");
    scanf("%d", &B);
    if (A==B)
        printf("Os numeros sao iguais eh a soma: %d ", A+B);
    else
        printf("O produto entre eles eh: %d", A*B);
}
