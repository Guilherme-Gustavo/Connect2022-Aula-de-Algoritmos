#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura;
    printf("Digite o sexo da pessoa: 'M' para masculino ou 'F' para feminino: ");
    scanf("%c", &sexo);
    if (sexo!='m' && sexo!='M' && sexo!='F' && sexo!= 'f')
        printf("Valor para sexo invalido, recomece informando valores validos.");
    else{
    printf("Digite a altura da pessoa em metros (Ate 3m de altura): ");
    scanf("%f", &altura);
    if (altura>3) // Se a pessoa quiser testar um gigante hipotético de até 3m, o código calcula. maior que isso não. Considerei isso pois o homem mais alto do mundo verificado tinha um pouco mais de 2,70m
        printf("Altura invalida, informe tudo novamente");
        else{
    if (sexo=='M' || sexo=='m')
        printf("O peso ideal para esta pessoa eh de: %.3fkg ", (72.7*altura)-58);
    else if(sexo=='F' || 'f')
        printf("O peso ideal para esta pessoa eh de: %.3fkg ", (62.1*altura)-44.7);
    }
    }
}
