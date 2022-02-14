#include<stdio.h>

int main(){
    
    void printar();//aqui é declaração para poder pegar lá em baixo na linha 12

    printar();
    
    return 0;

}
void printar(void){
    printf("Ola");
}

/*A outra forma é pegar a função com void e colocar em cima do main  e sem declarar 
 no main. colocando da seguinte forma: */

/*

void printar(void){
    printf("Ola");
}

int main(){
    printar();
    
    return 0;
}


 */