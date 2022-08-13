#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float raizquadrada(float n);

int main()
{
   float n;
   printf("Digite um numero para calcular sua raiz quadrada: ");
   scanf("%f", &n);
   printf("A raiz quadrada de %f eh: %f",n, raizquadrada(n));
}


float raizquadrada(float n){
    float raiz= sqrt(n);
    return raiz;
}
