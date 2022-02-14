#include<stdio.h>

int main(){
  int matriz[2][3];

  matriz[0][0] = 11;
  matriz[0][1] = 12;
  matriz[0][2] = 13;

  matriz[1][0] = 21;
  matriz[1][1] = 22;
  matriz[1][2] = 23;


  printf("%d ", matriz[0][0]);
  printf("%d ", matriz[0][1]);
  printf("%d \n", matriz[0][2]);

  printf("%d ", matriz[1][0]);
  printf("%d ", matriz[1][1]);
  printf("%d \n", matriz[1][2]);
/*  for(int i=0; i<2; i++){ aqui é boa estrategia para facilitar o processo
    for(int j = 0; j <3; j++){
      printf("%d ", matriz[0][0]);
      printf("%d ", matriz[0][1]);
      printf("%d \n", matriz[0][2]);

      printf("%d ", matriz[1][0]);
      printf("%d ", matriz[1][1]);
      printf("%d \n", matriz[1][2]);
    }
    return 0;
  }*/


}
