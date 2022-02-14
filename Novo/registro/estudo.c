/*REGISTRO tECNICAS DE PROGRAMAÇÃO */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

  int num;
  char nome[60];

} xy;

int main(){

  xy thing;

    thing.num = 10;
    //thing.nome ="Pedro";
    strcpy(thing.nome, "Pedro");

    printf("nome :%s \n idade: %i", thing.nome, thing.num);
}
