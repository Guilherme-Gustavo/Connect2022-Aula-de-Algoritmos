#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero_casas=0, valor_canal=0, pessoas_can3=0, pessoas_can5=0, pessoas_can8=0, pessoas_can11=0, pessoas_can13=0, pessoas_total=0, total_can3=0, total_can5=0, total_can8=0, total_can11=0, total_can13=0;

    printf("Informe o numero total de casas visitadas: ");
    scanf("%d", &numero_casas);
    for (int i=1; i<=numero_casas;){

       printf("Digite o n�mero do canal que estava sendo assistido na %d� casa\(3 ou 5 ou 8 ou 11 ou 13\): ", i);
       scanf("%d", &valor_canal);
       if (valor_canal==3 || valor_canal==5 || valor_canal==8 || valor_canal==11 || valor_canal==13){

       switch (valor_canal){
       case 3:
         printf("Digite o n�mero de pessoas que estavam assitindo ao canal 3: ");
         scanf("%d", &pessoas_can3);
         total_can3=total_can3+pessoas_can3;
         pessoas_total=pessoas_total+pessoas_can3;
         i++; // incremento colodado dentro do case como teste, pois se o usu�rio digitar um canal inv�lido, n�o ser� contabilizado como uma casa. O contador s� aumentar� se ele digitar 3,5,8,11 ou 13 para o canal
       break;
       case 5:
         printf("Digite o n�mero de pessoas que estavam assitindo ao canal 5: ");
         scanf("%d", &pessoas_can5);
         total_can5=total_can5+pessoas_can5;
         pessoas_total=pessoas_total+pessoas_can5;
         i++;
       break;
       case 8:
         printf("Digite o n�mero de pessoas que estavam assitindo ao canal 8: ");
         scanf("%d", &pessoas_can8);
         total_can8=total_can8+pessoas_can8;
         pessoas_total=pessoas_total+pessoas_can8;
         i++;
       break;
       case 11:
         printf("Digite o n�mero de pessoas que estavam assitindo ao canal 11: ");
         scanf("%d", &pessoas_can11);
         total_can11=total_can11+pessoas_can11;
         pessoas_total=pessoas_total+pessoas_can11;
         i++;
       break;
       case 13:
         printf("Digite o n�mero de pessoas que estavam assitindo ao canal 13: ");
         scanf("%d", &pessoas_can13);
         total_can13=total_can13+pessoas_can13;
         pessoas_total=pessoas_total+pessoas_can13;
         i++;
       break;
       }
       }else printf("Canal invalido\n");
    }
        printf("total canal 3: %d\n\n", total_can3);
        printf("total canal 3: %d\n\n", total_can5);
        printf("total canal 3: %d\n\n", total_can8);
        printf("total canal 3: %d\n\n", total_can11);
        printf("total canal 3: %d\n\n", total_can13);
        printf("Total de pessoas assitindo � TV: %d\n\n", pessoas_total);

        if(pessoas_total>0){
        printf("A audi�ncia do canal 03 � de: %.3f\n", (float) total_can3/pessoas_total*100,0);
        printf("A audi�ncia do canal 05 � de: %.3f\n", (float) total_can5/pessoas_total*100,0);
        printf("A audi�ncia do canal 08 � de: %.3f\n", (float) total_can8/pessoas_total*100,0);
        printf("A audi�ncia do canal 11 � de: %.3f\n", (float) total_can11/pessoas_total*100,0);
        printf("A audi�ncia do canal 13 � de: %.3f\n", (float) total_can13/pessoas_total*100,0);
        }
        else
            printf("A audi�ncia de todos os canais foi 0%, pois ningu�m assistia � televis�o.\n\n");

}

