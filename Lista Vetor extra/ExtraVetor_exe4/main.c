#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior_prino(int n);

int main()
{
    int n;
    setlocale(LC_ALL,"portuguese");
    printf("Digite um numero para verificar qual o maior numero primo menor que aquele número: ");
    scanf("%d", &n);
    printf("O primo encontrado menor ou igual ao numero %d é %d.", n, maior_prino(n));
}

int maior_prino(int n){
    int primo_maior=0;
    for(int soma=0, i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0)
            soma+=1;
            if(soma==3)
                break;
        }
        if(soma==2)
            primo_maior=i;
        soma=0;
    }
    return primo_maior;
    }
