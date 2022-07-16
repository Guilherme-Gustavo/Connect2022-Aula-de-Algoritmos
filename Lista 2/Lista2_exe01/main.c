#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B;
    printf("Escreva um numero A: ");
    scanf("%f", &A);
    printf("Escreva um numero B: ");
    scanf("%f", &B);
    if (A>B)
        printf ("O maior valor eh o A=%f",A);
    else if(B>A)
        printf ("O maior valor eh o B=%f",B);
    else if (B==A)
        printf("Os numeros sao iguais");
}
