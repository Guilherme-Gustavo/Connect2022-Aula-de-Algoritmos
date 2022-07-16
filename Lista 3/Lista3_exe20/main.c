#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i=1, codigo_animal, numero_gatos=0, numero_cachorros=0;
    printf("------INSTRUÇÕES:------- \nVocê tem vários animais na loja,\nmas não sabe o número total que ela possui.\nSeu objetivo é cadastrar a raça enquanto faz a contagem.\nPara isso, quando pedido, informe o número 1 se ainda possui animais a cadastrar\ne 0 se terminou o cadastro.\n");
    printf("Para o cadastro da raça dele, digite 1 se o animal for um gato e 2 se o mesmo for um cachorro:\n\n");
    printf("Vamos começar o cadastramaneto.\n");
    while (i==1){
        printf("Digite 1 se o animal for um gato e 2 se o mesmo for um cachorro:\n");
        scanf("%d", &codigo_animal);
        if (codigo_animal==1)
            numero_gatos+=1;
        else if (codigo_animal==2)
            numero_cachorros+=1;
        printf("Informe o número 1 se ainda possui animais a cadastrar e 0 se terminou o cadastro:\n");
        scanf("%d", &i);
    }
    printf("O número total de gatos é de %d e o número total de cachorros é de %d.", numero_gatos, numero_cachorros);

}
