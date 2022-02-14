#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int x, t;
    int y = 10;

    printf("Digite um numero para ser somado: \n");
    scanf("%i", &x);

    t = x + y;

    printf("Valor total: %i", t);
}