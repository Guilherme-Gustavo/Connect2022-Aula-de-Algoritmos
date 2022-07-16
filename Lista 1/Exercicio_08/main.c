#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Escreva a nota 1, de 0 a 100: ");
    scanf("%f", &nota1);
    printf("Escreva a nota 2, de 0 a 100: ");
    scanf("%f", &nota2);
    printf("Escreva a nota 3, de 0 a 100: ");
    scanf("%f", &nota3);
    media=(1*nota1+2*nota2+3*nota3)/6;
    printf("A media do aluno eh de %.2f", media);
}
