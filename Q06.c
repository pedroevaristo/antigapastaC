#include<stdio.h>
#include<stdlib.h>

int main(void){
int x, u, neg;
    u = 0;
    printf("Digite 10 numeros e entre eles os negativos: \n");
    do{
        scanf("%d", &x);
        u++;

        if( x < 0){
            neg = x;
            printf("Numero negativo: %d \n", neg);
        }
    }while(u < 5);
    
    
    


}