#include <stdio.h>

int main(){
  int x = 12;
  int y = 10;
  int *pont = &y;//vai captar o valor com &
  int *ponte = &x;
  printf("Valor de x e pontero: %d %d\n", x, pont);//acima colocque sem o * para mostrar o endereço.
  printf("Valor de y e pontero: %d %d\n", y, ponte);

  *pont = 20;
  printf("%d", *pont);
return 0;
}
