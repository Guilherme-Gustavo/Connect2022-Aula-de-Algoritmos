#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL, "Portuguese");
    char resposta[4];
    int resultado_maiusculo, resultado_minusculo;
    printf("Responda � pergunta seguinte com \"Sim\" ou \"N�o\".\n");
    do{
        printf("Ol� tudo bem?\n");
        scanf("%s", &resposta); //como pode ser visto, qualquer coisa que o usu�rio responder diferente de "Sim" ou "sim" vai entrar em loop fazendo a pergunta inicial. N�o sei se tem outra maneira, mas tive que criar duas vari�veis resposta para min�scula e mai�scula para aceitar isso. Se fosse pensar em todas as poss�veis escritas de sim, seria 2*2*2=8 vari�veis de compara��o?
        resultado_maiusculo=strcmp(resposta, "Sim");
        resultado_minusculo=strcmp(resposta, "sim");
        }while (resultado_maiusculo!=0 && resultado_minusculo!=0);

    }

    /* aqui temos um exemplo, caso o usu�rio queira responde sim mas usando caixa alta ou baxa alternada. Fiz as 8 possibilidades com a palavra "sim", a t�tulo de curiosidade.
    int main()
    {

    setlocale (LC_ALL, "Portuguese");
    char resposta[4];
    int resultado, valor=1;
    printf("Responda � pergunta seguinte com \"Sim\" ou \"N�o\".\n");
    do{
        printf("Ol� tudo bem?\n");
        scanf("%s", &resposta);
        if (strcmp(resposta, "Sim")==0)
            valor=strcmp(resposta, "Sim");
        else if (strcmp(resposta, "sim")==0)
            valor=strcmp(resposta, "sim");
        else if (strcmp(resposta, "SIm")==0)
            valor=strcmp(resposta, "SIm");
        else if (strcmp(resposta, "sIm")==0)
            valor=strcmp(resposta, "sIm");
        else if (strcmp(resposta, "SiM")==0)
            valor=strcmp(resposta, "SiM");
        else if (strcmp(resposta, "siM")==0)
            valor=strcmp(resposta, "siM");
        else if (strcmp(resposta, "SIM")==0)
            valor=strcmp(resposta, "SIM");
        else if (strcmp(resposta, "sIM")==0)
            valor=strcmp(resposta, "sIM");
        }while (valor!=0);

    } */

