#include <stdio.h>
#include <stdlib.h>

int main()
{
      for (int lin=0; lin<7; lin++){
        for(int col=0; col<7; col++){
            if (lin==0 || lin==6 || lin+col==6 || lin==col ||col==0|| col==6)
            printf ("%d:%d ", lin,col);
            else printf("    ");
    }
    printf("\n");
}
}
