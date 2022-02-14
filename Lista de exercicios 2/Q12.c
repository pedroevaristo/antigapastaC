#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct {
    int i;//idade
    char n[100];//nome
    char c[100];//o curso que esta fazendo
    int en[6], a;//endereço
}Q12;


int main(){

    Q12 inf;
        
     printf("Digite seu nome: \n");
     gets(inf.n);

     printf("Qual curos esta fazendo ultimamente?\n");
     gets(inf.c);

     printf("Idade: \n");
     scanf("%i", &inf.i);

    printf("Endereco(digite um de cada vez de press Enter): \n");
    for(inf.a = 0; inf.a <6; inf.a++){
        scanf("%i", &inf.en[inf.a]);
    }
     
   

}