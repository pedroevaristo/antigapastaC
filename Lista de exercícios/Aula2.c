/*//algoritmo que exibe os valores impares de um vetor

#include <stdio.h>

#include <math.h>





int main(void) {

int vetor [3], soma, i;

soma = 0;

for (i = 0; i < 3; i++) {

  scanf("%d", &vetor[i]);

  if (vetor[i] %2 != 0){

    soma = soma + vetor[i];

   // soma += vetor[i];

  }

}
  printf("%d \n", soma);
return 0;

}*/


#include<stdio.h>

int main(void){

int vet[3];
int x, i = 0, a;

for(int y = 0; y < 3; y++){
    
    scanf("%d", &vet[a]);
    
    if(vet[a] % 2 == 1){
        i+= vet[a];
    }

}

printf("%d \n", i);

}