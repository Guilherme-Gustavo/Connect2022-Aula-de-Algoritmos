#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int mesa_fumantes=25, mesa_nao_fumantes=25,i, tecla;
    for (i=1; i<=50;)
    {
        if(mesa_fumantes>=1 && mesa_nao_fumantes>=1)
        {
            printf("\nBom dia, voc� ligou para o restaurante Beethoven. Temos %d mesas para fumantes e %d mesas para n�o fumantes dispon�veis.\nTecle 1 se deseja reservar uma mesa para fumantes e 2 se deseja reservar uma mesa para n�o fumantes:\n", mesa_fumantes, mesa_nao_fumantes);
            scanf("%d", &tecla);
            if(tecla==1)
            {
                printf("\nA op��o escolhida foi mesa para fumantes. Obrigado pela prefer�ncia.\n");
                mesa_fumantes=mesa_fumantes-1;
                i++;
            }
            if(tecla==2)
            {
                printf("\nA op��o escolhida foi mesa para n�o fumantes. Obrigado pela prefer�ncia.\n");
                mesa_nao_fumantes=mesa_nao_fumantes-1;
                i++;
            }
        }
        if(mesa_fumantes>=1 && mesa_nao_fumantes==0)
        {
            printf("\nBom dia, temos apenas %d mesas para fumantes dispon�veis. Tecle 1 se deseja reservar uma mesa para fumantes\n", mesa_fumantes);
            scanf("%d", &tecla);
            if (tecla==1)
            {
                printf("\nA op��o escolhida foi mesa para fumantes. Obrigado pela prefer�ncia.\n");
                mesa_fumantes=mesa_fumantes-1;
                i++;
            }
        }
        if(mesa_fumantes==0 && mesa_nao_fumantes>=1)
        {
            printf("\nBom dia, temos apenas %d mesas para n�o fumantes dispon�veis. Tecle 2 se deseja reservar uma mesa para n�o fumantes.\n", mesa_nao_fumantes);
            scanf("%d", &tecla);
            if (tecla==2)
            {
                printf("\nA op��o escolhida foi mesa para n�o fumantes. Obrigado pela prefer�ncia.\n");
                mesa_nao_fumantes=mesa_nao_fumantes-1;
                i++;
            }
        }

    }
    printf("\nInfelizmente n�o temos mais mesas dispon�veis. Obrigado pela prefer�ncia.\n");
}
