#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 1, y = 1;// x = par y = imapr

    for (int l = 0; l < 10; l++)
    {
        scanf("%d", &l);

        if(l % 2 == 0){
            x+= 1;
        }
        if(l % 2 == 1){
            y+= 1;

        }

    }
        
        printf("Numeros lidos impares: %d \n", x);
        printf("Numeros lidos pares: %d\n", y);
        return 0;
}
/*if(l % 2 == 0){
            x+= l;
        }
        if(l % 2 == 1){
            y+= l;

        } Aqui vai mostrar os resultados da soma dos imapres e pares.s*/