#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
int x, y, t;
int a;


    FILE *file;

    file = fopen("Q11.txt", "r");
        
    fscanf(file, "%i ", &a);

    scanf("%i", &x);
    t = a + x;

    printf("o valor total eh: %i", t);//prestar atenção quando usar o f pois acaba bugando.
    
    fclose(file);
    printf("\n\nArquivo foi fechado!");
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
  FILE *file;
  file = fopen("seg.txt", "r");//eu tive que colocar as informações: 10 500 1000

    if(file == NULL){
      printf("Nao tem informacoes");
    }
  int x, y, z;//10, 500, 1000

  fscanf(file, "%i %i %i", &x, &y, &z);

  printf("%i %i %i\n", x, y, z);

  fclose(file);

}*/