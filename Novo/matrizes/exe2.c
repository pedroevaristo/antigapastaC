#include<stdio.h>

int main(){
  int x, y, m[3][3];

  for(x = 0; x <3 ;x++ ){
    for(y = 0; y <3; y++){
      scanf("%d", &m[x][y]);
    }
    printf("-------\n");
  }
  printf("os maiores valores que 10\n");
  for(x = 0; x <3 ;x++ ){
    for(y = 0; y <3; y++){
      if(m[x][y] > 10){
          printf("m[%d][%d] = %d\n", x, y, m[x][y]);
        }
    }
  }

}
