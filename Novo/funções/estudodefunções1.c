#include<stdio.h>

int main(void){

    float calAreadoRet(float base, float altura);//declaração da função abaixo 0.1

    float  area = calAreadoRet(10.0, 20.0);// está chamando lá da função o que deve ser feito com estes valores

    printf("Area = %.2f", area);//0.2

    return 0;
}
/* aqui 0.1  */
float calAreadoRet(float base, float altura){

    float area = base * altura;

    return area;// é o resultado que irá para o main mostrando no printf 0.2

}