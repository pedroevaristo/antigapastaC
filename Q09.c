#include<stdio.h>
#include<stdlib.h>

int main(void){
    int x, y;
    printf("Digite sua idade: \n");
    scanf("%d", &x);

    if(x >= 5 && x <= 10){
        printf("voce e infantil: \n");
    } 
    if(x >= 11 && x <= 17){
        printf("voce e Juvenil: \n");
    }
    if(x >= 18 && x <= 25){
        printf("voce e Senior: \n");
    }

return 0;
}