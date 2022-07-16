#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vendas, comissao;
    printf("Digite o valor em acoes vendidas pelo corretor: ");
    scanf("%f", &vendas);
    if(vendas<=2500){
        comissao=30+0.017*vendas;
        if(comissao<39)
            comissao=39;
            printf("A comissao do corretor eh de %.2f reais", comissao);
    }
    else if(vendas>2500 && vendas<=6250){
        comissao=56+vendas*0.0066;
        printf("A comissao do corretor eh de %.2f reais", comissao);
    }
    else if (vendas>6250 && vendas<=20000){
        comissao= 76+0.0034*vendas;
        printf("A comissao do corretor eh de %.2f reais", comissao);
    }
    else if (vendas>20000 && vendas<=50000){
        comissao=100+0.0022*vendas;
        printf("A comissao do corretor eh de %.2f reais", comissao);
    }
    else if (vendas>50000 && vendas<=500000){
        comissao=155+0.0011*vendas;
        printf("A comissao do corretor eh de %.2f reais", comissao);
    }
    else{
        comissao=255+0.0009*vendas;
        printf("A comissao do corretor eh de %.2f reais", comissao);
    }
}
