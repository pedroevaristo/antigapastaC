#include<stdlib.h>
#include<stdio.h>
//#include<locale.h>
int main(void){
int x, I, i, aux, k;//aux
int n, nu, num, numb, numbe, number, number;

    printf("Digite aí 10 numeros \n");
    
    scanf("%d", &n);
    scanf("%d", &nu);
    scanf("%d", &numb);
   
    for(x = 0; x < 3; x++){
    
        if(n > nu && n > num){
        aux = n;//armazenar
        }
        else if(nu < num){
            aux = num;
            
        }
        else {
            aux = nu;
        }
    }
    printf("%d", aux);

return 0;
}