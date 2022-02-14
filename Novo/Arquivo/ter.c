#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Faça um programa que abra um arquivo de texto e mostre
 quantos caracteres desse arquivo são vogais.*/
int main(){
  FILE *file;
  char ter[50];
  char a[50], e[50], i[50], o[50], u[50];
  int h;


  file = fopen("ter.txt", "r");

  while(fgets (ter, 50, file)!= NULL){
    fprintf("%s", ter);
  /*  if(exerc == 'a' || exerc == 'e' || exerc == 'i' || exerc == 'o' || exerc == 'u' ){
      h = h + 1;
    }*/

  }
  fclose(file);

//  printf("Consegiuu mano aleluia mano do ceu \n");
  //printf("Quantidade de vogais: %i", h);

return 0;
}
