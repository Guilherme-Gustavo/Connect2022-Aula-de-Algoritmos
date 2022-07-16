#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cent01, cent05, cent10, cent25, cent50, real;
    float economia;
    printf("Escreva a quantidade de moedas de 1 centavo economizadas: ");
    scanf("%d", &cent01);
    printf("Escreva a quantidade de moedas de 5 centavos economizadas: ");
    scanf("%d", &cent05);
    printf("Escreva a quantidade de moedas de 10 centavos economizadas: ");
    scanf("%d", &cent10);
    printf("Escreva a quantidade de moedas de 25 centavos economizadas: ");
    scanf("%d", &cent25);
    printf("Escreva a quantidade de moedas de 50 centavos economizadas: ");
    scanf("%d", &cent50);
    printf("Escreva a quantidade de moedas de 1 real economizadas: ");
    scanf("%d", &real);
    economia= 0.01*cent01 + 0.05*cent05 + 0.10*cent10 + 0.25*cent25 + 0.50*cent50 + 1*real;
    printf("O total economizado foi de R$%0.2f", economia);
}
