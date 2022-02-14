#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    FILE *file;
    char a[300];
    file = fopen("Q14.txt", "r");

    while(fgets(a, 300, file) != NULL){
      printf("%s \n", a);
    }

    fclose(file);

}
