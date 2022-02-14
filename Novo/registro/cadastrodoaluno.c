#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct inf{
    //quais informações colocar?
    int num;
    char nome[100];
    int cod;
};

int main(){
    struct inf y;
    printf("Digite seu nome: \n");
    gets(y.nome);

    printf("digite seu codigo: \n");
    scanf("%i", &y.cod);

    printf("Digite seu numero do celular: ");
    scanf("%i", &y.num);
/*=============== */

    printf("verifique as informacoes abaixo: \n");
    printf("Nome: %s \n", y.nome);
    printf("Codigo: %i \n", y.cod);
    printf("Num. do celular: %i", y.num);

}