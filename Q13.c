#include<stdio.h>
#include<stdlib.h>

int main(){
int x, y, k;

    printf("Digite dois numeros: \n");
    scanf("%d \n %d", &x, &y);
    
    if(y > x ){
    printf("Sao diferentes!");
    printf("%d e o maior(y)", y);
    }else if(x > y){
    printf("Sao diferentes!");
    printf("%d e o maior(x)", x);
    }
    else if(x == y){
    printf("Sao iguais!");

    }
    

return 0;
}