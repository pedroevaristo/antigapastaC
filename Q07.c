#include<stdio.h>
#include<stdlib.h>

int main(){
int a, b, c, l;

    printf("Digita 5 numeros que seja positivo, zero, negativo: \n");

    for(int y = 0;  y < 5; y++){
        scanf("%d", &l);
        if(l == 0){
            printf("e zero! \n");
        }
        else if(l > 0){
            printf("e postivo \n");
        }
        else if(l < 0){
            printf("e negativo \n");
        }
    }

    
}