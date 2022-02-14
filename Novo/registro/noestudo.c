#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct X{//imaginamos aqui é uma caixa onde colcoar as informações
    char nome[100];
    int idade;
    char sexo[50];
};

int main(){//abaixo é uma fomra de chmar/ puxar as as coisas dentro de X
    struct X info;//aqui vai uma das formas de mostrar as coisas dentro da caixas classificando.
    printf("Digitar o nome \n");
    gets(info.nome);

    printf("Digite sua idade\n");
    scanf("%i", &info.idade);

    printf("Ola: %s \n", info.nome);
    printf("Confirme sua idade e outras informacoes...", info.idade);

}