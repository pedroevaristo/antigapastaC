#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Faça um programa que abra um arquivo de texto e mostre
 quantos caracteres desse arquivo são vogais.*/
int main(){
  FILE *file;
  int h;
  char exerc[50];
  char a[50], e[50], i[50], o[50], u[50];
  


  file = fopen("exerc.txt", "r");

  while(fgets (exerc, 50, file)!= NULL){
    printf("%s", exerc);
    if(exerc == 'a'){
      h = h + 1;
    }/*|| exerc == 'e' || exerc == 'i' || exerc == 'o' || exerc == 'u' */

  }
  fclose(file);

  printf("Consegiuu mano aleluia mano do ceu \n");
  printf("Quantidade de vogais: %i", h);

return 0;
}
