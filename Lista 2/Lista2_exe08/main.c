#include <stdio.h>
#include <stdlib.h>

int main()
{
    char condicao;
    float preco;
    printf("A seguir temos as 4 unicas condicoes validas de pagameto:\na - A vista em dinheiro ou cheque, recebe 10%% de desconto\nb - A vista no cartao de credito, recebe 15%% de desconto\nc - Em duas vezes, preco normal de etiqueta sem juros\nd - Em duas vezes, preco normal de etiqueta mais juros de 10%%\n");
    printf("Por favor, informe qual das condicoes deseja utilizar para efetuar seu pagamento a, b, c ou d: ");
    scanf("%c", &condicao); //scanf simplesmente não funciona, programa passa batido como se ele não existisse, ou o programa assume um valor aleatorio e falha nos testes abaixo. Será que o problema é o valor de char poder ser c, que é o valor da função %c? ou sera que as funcoes char devem ser lidas antes? Aparentemente, caso o scanf do float fique antes, a teclagem "enter" do scanf do float entra como caracter no scanf do char, o que resulta em cair no meu ultimo else de escolha invalida.
    printf("Infore o preco de etiqueta do produto: ");
    scanf("%f", &preco);
    if(condicao=='a')
        printf("O valor a ser pago a vista sera de: R$%.2f", preco*0.9);
    else if (condicao=='b')
        printf("O valor a ser pago a vista no cartao de credito eh de: R$%.2f", preco*0.85);
    else if (condicao=='c')
        printf("O valor a ser pago sera em duas parcelas de R$%.2f cada, totalizando R$%0.2f", preco/2 , preco);
    else if (condicao=='d')
        printf ("O valor a ser pago sera em duas parcelas de R$%.2f cada, totalizando R$%0.2f", 1.1*preco/2, 1.1*preco);
    else
        printf("Condicao de pagamento invalida");

}
