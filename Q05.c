#include<stdio.h>
#include<stdlib.h>

int main(){
int x, l = 0;

    printf("Dgite o numero ai para iniciar a tabuada: \n");
    scanf("%d", &x);
    for(int i = 1;  i <= 10; i++){
        l+= x;
        printf("%d \n", l);
    }
    
    return 0;
}