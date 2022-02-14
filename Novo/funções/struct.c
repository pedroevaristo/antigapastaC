#include <stdio.h>

int main(){

  struct ficha_aluno //tipo de dado
  {
    char nome[40];
    int n;//numero
    float no;//nota

  };

  struct ficha_aluno aluno;

  printf("cadastro do aluno: \n");

  printf("Nome do aluno: ");
  fgets(aluno.nome, 40, stdin);

  printf("Digitar o numero do aluno: \n");
  scanf("%d", &aluno.n);

  printf("Agora, a nota: \n");
  scanf("%f", &aluno.no);

    printf("\n==========\n");
  printf("%s", aluno.nome);
  printf("%d \n", aluno.n);
  printf("%.2f \n", aluno.no);

return 0;
}
