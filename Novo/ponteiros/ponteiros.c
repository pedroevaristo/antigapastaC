#include<stdio.h>
#include<conio.h>
/*__O que são ponteiros:
são variavéis que guardam endereços de memória de outras variavéis,
vale acrescentar que não guarda valores só se tiver dentro do Endereço.
__Símbolos: &(Endereço) e "*"(valor)*/
int main(void){
  int x;
  x = 15;

  int *pont;//aqui vai buscar o endereço de X
  pont = &x;//vai atribuir o valor de x por meio do enderço;

  printf("%i \n", pont);//aqui mostra o endereço de x
  printf("%i", *pont);//aqui mostra o valor no endereço da memoria onde esta armazenado o x

}
