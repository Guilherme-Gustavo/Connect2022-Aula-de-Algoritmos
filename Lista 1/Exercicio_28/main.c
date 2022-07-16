#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2;
    printf("Digite a primeira nota, de 0 a 100: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota, de 0 a 100: ");
    scanf("%f", &nota2);
    printf("A media final, considerando peso 2 para a nota %.2f e peso 3 para a nota %.2f eh de %.2f: ", nota1, nota2, (nota1*2+nota2*3)/5);
}
