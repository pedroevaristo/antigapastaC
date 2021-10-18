#include<stdio.h>
#include<stdlib.h>

int main(){
int x, vet[5], y, u = 0;
int i, l;

printf("Digite o numero de patinhos que você quer ter nos versos: \n ");
scanf("%d", &x);

    for(; x > u; x--){
 printf("%d patinhos foram passear", x);
 printf("\n Alem das montanhas para brincar");
 printf("\n A mamae gritou: Qua, qua, qua, qua");
 printf("\n Mas so %d patinhos voltaram de la \n\n", x-1);
    }
/*x = x - 1;
    l = x;
 printf("\n Mas so %d patinhos voltaram de la \n\n", l);*/    

return 0;
}
