#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
  char a[300], k[300];
  FILE *file;

  file = fopen("qua.txt", "w");

    gets(a);    
    //strcpy(k ,a); caso de erro
    
  if(strlen (a) > 0){
    fputs(a, file);
    fputs(" ", file);
  }

  fclose(file);
  printf("\n\nFuncionou homi!!!");
}
