#include<stdio.h>

int main(){
  int m[3][3];//linha e coluna

  printf("Digite valorea abaixo: \n");

  for(int j = 0; j <3; j++){//linha
    for(int J =0; J < 3; J++){//coluna
      printf("Elemento[%d][%d]: ", j, J);
      scanf("%d", &m[j][J]);
    }
  }
  printf("\n==========================\n");

  for(int j = 0; j <3; j++){//linha
    for(int J =0; J < 3; J++){//coluna
      printf("Elemento[%d][%d]: %d \n", j, J, m[j][J]);

    }
  }



}
