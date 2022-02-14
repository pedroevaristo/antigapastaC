#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int j, vet[10], h, a = 0;

    printf("Digite 10 numeros\n");

    for(j = 0; j < 10; j++){

        scanf("%i", &vet[j]);

    }

    printf("Digite um numero para verificar esta dentro do vetor: \n");
    scanf("%i", &h);

    for(j = 0; j < 10; j++){
    if(h == vet[j]){
        printf("Aqui esta o numero: %i \n", vet[j]);
        exit(0);
    }
      else {
        a++;
      }
    }

    if(a == 10){
      printf("Seu numero nao esta dentro vetor");
    }


}
