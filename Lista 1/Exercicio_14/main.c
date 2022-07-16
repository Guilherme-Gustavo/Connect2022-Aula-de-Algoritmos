#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, area;
    printf("Escreva o raio da pizza em cm: ");
    scanf("%f", &raio);
    area= pow(raio,2)*3.14;
    printf("A area da pizza eh de %.2f centimetros quadrados", area);

}
