#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char resposta[4];
    int resultado, valor=1;
    printf("Responda à pergunta seguinte com \"Sim\" ou \"Não\".\n");
    do{
        printf("Olá tudo bem?\n");
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

    }

