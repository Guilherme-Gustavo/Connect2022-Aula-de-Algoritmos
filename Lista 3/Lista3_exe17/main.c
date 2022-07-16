#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cliente, numero_de_bebidas, codigo_bebida;
    float peso, valor_da_conta, valor_bebida, valor_comida;

    printf("Abaixo temos o menu da casa: \n");
    printf("-----------BEBIDAS----------\n");
    printf("1-Água----------------R$4,00\n");
    printf("2-Suco----------------R$6,00\n");
    printf("3-Cerveja-Lata--------R$5,00\n");
    printf("4-Cerveja-Garrafa-----R$8,00\n");
    printf("5-Refrigerante--------R$4,50\n");
    printf("PRATO:            R$/Kg23,59\n");
    printf("----------------------------\n\n");

    printf("Caso seja informado 0 para bebida e 0 para peso da comida, a compra se encerrará!\n\n");

    do{
        printf("Digite o peso de comida do prato em kg: ");
        scanf("%f", &peso);
        valor_comida=peso*23.59;
       do{
        printf("Digite o código, de 1 a 5, para a bebida escolhida e 0 se não quiser nenhuma: ");
        scanf("%d", &codigo_bebida);

        if (codigo_bebida>=0 && codigo_bebida<=5){

        switch(codigo_bebida){
           case 1:
            printf("Digite quantas unidades da bebida o senhor deseja: ");
            scanf("%d", &numero_de_bebidas);
            valor_bebida=4*numero_de_bebidas;
           break;
           case 2:
            printf("Digite quantas unidades da bebida o senhor deseja: ");
            scanf("%d", &numero_de_bebidas);
            valor_bebida=6*numero_de_bebidas;
           break;
           case 3:
            printf("Digite quantas unidades da bebida o senhor deseja: ");
            scanf("%d", &numero_de_bebidas);
            valor_bebida=5*numero_de_bebidas;
           break;
           case 4:
            printf("Digite quantas unidades da bebida o senhor deseja: ");
            scanf("%d", &numero_de_bebidas);
            valor_bebida=8*numero_de_bebidas;
           break;
           case 5:
            printf("Digite quantas unidades da bebida o senhor deseja: ");
            scanf("%d", &numero_de_bebidas);
            valor_bebida=4.50*numero_de_bebidas;
           break;
           case 0:
            valor_bebida=0;
           break;
           }
           }else printf("Código inválido. Digite outro código: \n");
       }while(codigo_bebida<0 || codigo_bebida>=6);
           valor_da_conta= valor_comida+ valor_bebida;
           printf("O valor gasto em comida é de R$%.2f, o valor gasto em bebida é de R$%.2f e o valor total é de R$%.2f\n\n", valor_comida, valor_bebida, valor_da_conta);
        }while (valor_bebida!=0 || peso!=0);
}
