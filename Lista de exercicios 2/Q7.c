#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x, y, v[10], a ;
  for(x = 0; x < 10; x++){
    scanf("%i", &v[x]);
  }

  for(x = 0; x < 10; x++){
    a = 0;
    for(y = x + 1; y < 10; y++){
      if(v[x] == v[y]){
        a++;
      }
    }
      if(a == 1){
        printf("Número repetido %i, %i", v[x]);
        exit(0);
      }
  }

}
