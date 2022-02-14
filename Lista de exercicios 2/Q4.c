#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(){
    int ve[5], y, a = 0, h;

    printf("Digite os 50 numeros: \n");
    for(int y = 0; y < 50; y++){

        scanf("%i", &ve[y]);
//aqui to querendo passar as info para o outro for.
// Tentei com atribuição a = ve[y], mas não deu certo.
    }

    printf("O total de numero positivo e: %i \n", a);
    for(int y = 0; y < 50; y++){
      if(ve[y] > 0){
          printf("%i \n", ve[y]);
      }

    }
}
