#include<stdio.h>
#include<conio.h>

int main(){
  double y = 20.50;
  char x = 'D';

  double *ponty = &y;
  char *pontx = &x;

// aqui vai morstra o enderço da memoria em numeros hexadecimais, em binários. Com &.
  printf("%.2lf \n %.2lf \n", *ponty, &y);
  //printf("%lf \n", *y);isso ta erro na compilação

  printf("%d \n %d", *pontx, &x);
}
