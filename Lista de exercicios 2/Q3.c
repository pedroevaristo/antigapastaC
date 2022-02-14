#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vet[10], x, y;

    printf("Digite numeros positivos: \n");

    for(x = 0; x < 5; x++){
        scanf("%i", &vet[x]);
    }

    for(x = 0; x < 5; x++){
        if(vet[x] % 2 == 0 ){
            printf("Num. par: %i \n", vet[x]);
        }
        else if(vet[x] % 2 == 1){
            printf("NUm. Impar: %i \n", vet[x]);
        }
    }

}