#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i=1, codigo_animal, numero_gatos=0, numero_cachorros=0;
    printf("------INSTRU��ES:------- \nVoc� tem v�rios animais na loja,\nmas n�o sabe o n�mero total que ela possui.\nSeu objetivo � cadastrar a ra�a enquanto faz a contagem.\nPara isso, quando pedido, informe o n�mero 1 se ainda possui animais a cadastrar\ne 0 se terminou o cadastro.\n");
    printf("Para o cadastro da ra�a dele, digite 1 se o animal for um gato e 2 se o mesmo for um cachorro:\n\n");
    printf("Vamos come�ar o cadastramaneto.\n");
    while (i==1){
        printf("\nDigite 1 se o animal for um gato e 2 se o mesmo for um cachorro:\n");
        scanf("%d", &codigo_animal);
        if (codigo_animal==1)
            numero_gatos+=1;
        else if (codigo_animal==2)
            numero_cachorros+=1;
        printf("\nInforme o n�mero 1 se ainda possui animais a cadastrar e 0 se terminou o cadastro:\n");
        scanf("%d", &i);
    }
    printf("O n�mero total de gatos � de %d e o n�mero total de cachorros � de %d, totalizando %d animais na loja.", numero_gatos, numero_cachorros, numero_cachorros+numero_gatos);

}
