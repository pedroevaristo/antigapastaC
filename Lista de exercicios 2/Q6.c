#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
  int v[5], u, a, x , g;

  for(a = 0; a < 5; a++){
    scanf("%i \n", &v[a]);
  }

  for(a = 0; a < 5; a++){

    for(x = a+1; x < 5; x++){

      if(v[a] > v[x]){
        u = v[a];
        v[a] = v[x];
        v[x] = u;
        }
      }
    }

    for(a = 0; a < 3; a++){
      printf("%i\n", v[a]);
    }


}
//printf("%i\n", x);
