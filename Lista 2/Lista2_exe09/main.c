#include <stdio.h>
#include <stdlib.h>

int main()
{
    short unsigned int codigo; //teste de variavel para aprendizado
    float n1, n2, n3, media;
    printf("Digite o numero de identificacao do aluno: ");
    scanf("%u", &codigo);
    printf("Escreva as tres notas do aluno n1/n2/n3: cada uma separada por uma /: ");
    scanf("%f/%f/%f", &n1,&n2,&n3); // testando a ideia de separacao de tres variaveis escritas no mesmo print e lidas no mesmo scanf, separadas por algum simbolo. Interessante,
    media=(n1+n2+n3)/3;
    printf("A media do aluno eh de: %.2f\n", media);
    if (media>=70)
        printf("O aluno esta aprovado");
    else if(media>=40 && media<70)
        printf("O aluno esta de recuperacao");
    else
        printf("O aluno foi reprovado por nota");

}
