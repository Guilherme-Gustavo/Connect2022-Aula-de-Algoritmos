#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()  //não sei fazer este ainda
{

    setlocale (LC_ALL, "Portuguese");
    char resposta[4];
    printf("Responda à pergunta seguinte com \"Sim\" ou \"Não\".\n");
    do{
        printf("Olá tudo bem?\n");
        scanf("%s", &resposta);
        //printf("%s", resposta);
      /*  if (resposta=="Sim")
            printf("%s", resposta); */
        }while (resposta==Sim);
    }

