#include <stdio.h>
#include<math.h>
int main(){
int m[2][3];//lembrando que começa pelo 0
  int x, y;
  float t;

    printf("Digite os numeros abaixo: \n");

  for(x = 0; x < 3; x++){//coluna --> serve a cada rodada m[0][0] a m[2][2]

    for(y = 0; y <2; y++){//linha ->> foi trocado por questão de ter uma boa visualização

    scanf("%i", &m[x][y]);//nunca coloque 2 %d para a mesma matriz
    }
    printf("______\n");
  }

    for(x = 0; x < 3; x++){
      printf("notas abaixo:\n");
      for(y = 0; y < 2; y++){

        printf("m[%i][%i]: ", x, y);//m[x][y]
        printf("%d\n", m[x][y]);//com isso esta indicando onde com 0,1,2 o alunos 2x é a linha
      }
      printf("=============\n");
    }
//O problema que estava assim foi devido no segundo for ter outras variaveis que não era X e Y, logo isso ocasionava não mostrar o valores digitados

  for(x = 0; x < 3; x++){
    t = (m[x][0]+m[x][1])/2;
    printf("%.2f \n", t);
  }


}
