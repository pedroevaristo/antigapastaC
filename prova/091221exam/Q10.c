#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct{
    char n[200];//nome
    int en[7], h;//endereço
    int c[11], a;//cpf
}d;

int main(){
    d info;

    printf("Digite seu nome: \n");
    gets(info.n);

    printf("Digite seu endereco: \n");//digite 2 vezes
    for(info.h = 0; info.h < 2; info.h++){
    scanf("%i", &info.en[info.h]);
    }
    
    printf("Seu cpf: \n");
    for(info.a = 0; info.a < 4; info.a++){//digite 4 vezes
        scanf("%i", &info.c[info.a]);
    }

    printf("verifique as suas informacoes: \n");
    printf("%s \n", info.n);
    
    for(info.h = 0; info.h < 2; info.h++){
    printf("%i \n", info.en[info.h]);
    }
 
    for(info.a = 0; info.a < 4; info.a++){
        printf("%i", info.c[info.a]);
    }

}