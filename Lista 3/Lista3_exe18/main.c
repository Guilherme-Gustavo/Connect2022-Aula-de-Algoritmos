#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero_alunos;
    float nota1, nota2, media;
    printf("Digite o número de alunos existentes na turma: ");
    scanf("%d",&numero_alunos);
    for (int i=1; i<=numero_alunos; i++){
        printf("Digite a nota 1 do aluno %d, expressa de 0 a 10: ",i);
        scanf("%f", &nota1);
        printf("Digite a nota 2 do aluno %d, expressa de 0 a 10: ",i);
        scanf("%f", &nota2);
        media=(nota1+nota2)/2;
        if (media>=6)
            printf("O aluno %d está aprovado com a média %.2f\n\n", i, media);
        else printf("O aluno %d está reprovado com a média %.2f\n\n", i, media);
    }
}
