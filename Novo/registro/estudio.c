#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


typedef struct{
  int x, y, a, vl[3];//idade, sexo, codigo
  char n[100], v[100];//nome
  int h;//aux
}zs;

int main(){//funcionario
  int h;

  zs coisa;

  printf("Digite seu Nome e Sobrenome: \n");
  gets(coisa.n);
  gets(coisa.v);

  printf("Digite um codigo de 3 digitos: \n");
    h = 0;
    for(coisa.a =0; coisa.a < 3; coisa.a++){
    scanf("%i", &coisa.vl[coisa.a]);//vetor colcoar aqui
    h++;
    }

  if(h == 3){
    printf("processando... \n");

  }
  else if(h > 3){
    printf("Erro... \n");

  }

    printf("Verifique as informacoes: \n");

    printf("%s ", coisa.n);
    printf("%s \n", coisa.v);
  for(coisa.a =0; coisa.a < 3; coisa.a++){
    printf("%i", coisa.vl[coisa.a]);
  }

}
