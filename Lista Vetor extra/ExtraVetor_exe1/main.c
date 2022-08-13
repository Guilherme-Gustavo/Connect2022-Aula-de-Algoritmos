#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void potenciacao(double a, int b);
void quaispotencias(double a, int b);

int main()
{
    double a;
    int b;
    setlocale(LC_ALL,"portuguese");
    printf("Digite o valor da primeira base para a potenciação, que vai do valor até 10: ");
    scanf("%lf", &a);
    printf("Digite o valor para o expoente da potenciação, que vai de 0 ao valor digitado: ");
    scanf("%d", &b);
    //potenciacao(a, b);
    quaispotencias(a, b);

}

void potenciacao(double a, int b){
    double pot=1;
    for (int i=0; i<=b; i++){
        if(i>=1)
            pot=pot*a;
        printf("%.0lf^%d=%.0lf\n",a,i,pot);
        }
    }

void quaispotencias(double a, int b){
    for(double i=a;i<=10;i++)
      //  for(int j=0;j<=b;j++)
            potenciacao(i, b);
}
