#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{                 // funcionario 1
    char n[300];  // nome
    int c[11], a; // cpf
    int nm[3], r; // numero da matricula
} func;

int main()
{
    func inf;
      for(int g = 0; g < 2; g++){
        printf("\nDigite seu nome: \n");
        scanf("%s", &inf.n);
        scanf("%s", &inf.n);

        //gets(inf.n);

        printf("Seu cpf, digite os 11 numeros: \n");

        for (inf.a = 0; inf.a < 4; inf.a++)
        {
            scanf("%i", &inf.c[inf.a]);
        }

        printf("Numero da matricula(3 digitos): \n");
        for (inf.r = 0; inf.r < 3; inf.r++)
        {
            scanf("%i", &inf.nm[inf.r]);
        }

        //================================= mostrar as infor

        printf("As informacoes do funcionario, em sequencia: \n");

        printf("%s\n", inf.n);

        for (inf.a = 0; inf.a < 4; inf.a++)
        {
            printf("%i", inf.c[inf.a]);
        }
        printf("\n");
        for (inf.r = 0; inf.r < 3; inf.r++)
        {
            printf("%i", inf.nm[inf.r]);
        }
        printf("\n\n");
      }
}