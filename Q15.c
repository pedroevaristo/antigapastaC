#include<stdio.h>
#include<stdlib.h>

int main(){

    int vet[5], x = 0, k, u;

        printf("Digite 5 numeros \n");

        for(int y = 0; y < 5; y++){
            scanf("%d", &vet[x]);
        }
       
       printf("Verificar se o numero que digitou esta armazenado, abaixo: \n");
         scanf("%d", &u);

            if(u == vet[x]){
            printf("Sim esta aramzenado");
            }
            else if (u != vet[x]){
             printf("Nao esta armazenado este valor !");
            } 

    return 0;
}
/*if(u == vet[x]){
         k = u;
    }else if (u != vet[x]){
        printf("Nao esta armazenado este valor !");
    } */
     /*printf("Verificar se o numero que digitou esta armazenado, abaixo: \n");
    scanf("%d", &u);

    if(u == vet[x]){
        printf("Sim esta aramzenado");
    }
    else if (u != vet[x]){
        printf("Nao esta armazenado este valor !");
    } */