#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14159265359 //testando a função define
#include <math.h>

int main()

{
    float raio, altura;
    printf("Escreva o valor do raio da base do cilindro: ");
    scanf("%f", &raio);
    printf("Escreva o valor da altura do cilindro: ");
    scanf("%f", &altura);
    printf("O volume do cilindro eh de %.3f", Pi*raio*raio*altura);

}
