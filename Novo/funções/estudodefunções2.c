#include<stdio.h>
//ou pode declarar aqui nesta linha


int main(void){
int t;


    void texto();//declaração
    texto();//chamando o nome da variavel

    void tex(int n1, int n2);// organizar melhor as coisas por aqui
    tex(15, 5);

    int test(int a, int b);
    t = test(19, 1);
    printf("\n \n resultado %d", t);


return 0;
}

void texto(){
    printf("OI XARA");

}
int u;
void tex(int n1, int n2) {
     u = n1 + n2;

    printf("o resultado e %d", u);


}

int test(int a, int b){
    // toda vez que tiver o int usar o return 0, mas por curiosidade tire um dos dois :)
   return a + b;
}
