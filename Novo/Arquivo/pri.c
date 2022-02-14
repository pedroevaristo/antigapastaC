#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

  FILE *file;
  file = fopen("pri.txt", "w");
  fprintf(file,"Testando o arquivo.");
  fclose(file);

return 0;
}
