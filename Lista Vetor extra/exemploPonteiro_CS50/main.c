#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *texto = "vai la";
    //printf("Texto: ");
    //scanf("%c", texto);
    printf("o texto eh: %c", *(texto+1));
}
