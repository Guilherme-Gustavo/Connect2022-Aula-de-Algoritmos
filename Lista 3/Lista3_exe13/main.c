#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero, soma=0;
    int i=2;
    printf("Informações ao usuário:\nDigite números positivos para serem somados.\nQuando digitar um número negativo, o programa será encerrado\ne este número não será contabilizado na soma total dos positivos.\n\n");
    printf("Digite o 1º número: ");
    scanf("%f", &numero);
    if (numero>=0)
        soma=soma+numero;
    while (numero>=0){
        printf("Digite o %dº: ", i);
        scanf("%f", &numero);
        i+=1;
        if (numero>=0)
        soma=soma+numero;
    }
    printf("Programa encerrado.\nA soma dos números é de %f.", soma);

}
