#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int A[8], B[8];
    for (int i=0; i<8 ; i++){
        printf ("Escreva o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
        B[i]=A[i]*2;
    }
    for (int i=0; i<8; i++){
        printf("\nO valor de B[%d] é de: %d", i, B[i]);
    }

}
