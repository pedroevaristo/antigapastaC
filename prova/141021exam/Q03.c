#include<stdio.h>
#include<stdlib.h>

int main(){
int x, t;
    printf("Digite um numero: \n");
    printf("Multiplicacao \n");
    scanf("%d", &x);
    
    t = 0;
    
    for(int i = 1; i <= 10; i++){
        t+= x;
        //printf("%d \n", t);
        printf(" %d x %d = %d \n", i, x, t);
    }
    
    printf("Soma \n");
    system("pause");
    
    for(int i = 0; i <= 10; i++){
        printf("1 + = %d \n", x);
        x+= 1;
    }
    
    printf("Subtracao \n");
    system("pause");
    
    for(int i = 10; i >= 0; i--){
        x-=1;
        printf("%d -  =  %d \n", x, i);
    }
    
    printf("Divisao \n");
    system("pause");
    t = 1;
    for(int i = 0; i <= 10; i++){
        t = x * i;
        printf("%d / = %d \n", t, i);
    }

    return 0;
}