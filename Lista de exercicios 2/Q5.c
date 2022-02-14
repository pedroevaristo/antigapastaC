#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

    int ve[100], m, k, x;

    for(x = 0; x < 100; x++){
        scanf("%i", &ve[x]);
    }
    printf("================\n");

    for(; x > 0; x--){
         printf("%i \n", ve[x]);
    }
}
