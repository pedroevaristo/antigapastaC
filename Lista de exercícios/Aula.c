#include <stdio.h>



int main(void) 

{

  //Ponteiro do ponteiro

  int x, *pont_x, **p_pont_x;



  x = 0;



  printf("Valor de X é: %d \n\n", x);

  printf("Endereço de X é: %p \n\n", &x);



  pont_x = &x;

  p_pont_x = &pont_x;

  *pont_x = *pont_x + 100;



  printf("O valor endereçado apontado por pont_x é: %p\n\n", pont_x);



  printf("Novo valor de X é: %d \n\n", *pont_x);



  printf("Endereçamento da memória da variável apontada por pont_x é: %p \n\n", &pont_x);

  

  **p_pont_x = **p_pont_x + 20;



  printf("O valor de X é: %d \n\n", x);



  printf("O valor endereçado apontado por p_pont_x é: %x \n\n", **p_pont_x);



  printf("Valor da variável que estou apontado é: %x \n\n", **p_pont_x);



  printf("Endereçamento da memória da variável apontada por pont_x é: %p \n\n", &pont_x);

  

  return 0;

}
/*#include <stdio.h>

int main(void)
{
    int x, *pont_x, **p_pont_x;
    x = 0;

    printf("valor de x =  %d \n \n", x);

    printf("valor de x =  %p \n \n", &x);

       printf("o valor do enderecamento pont_x = %p", pont_x);

    **p_pont_x = **p_pont_x + 10;
    printf("Valor da variavel de x = %d \n \n", x);

    printf("Valor da variavel que estou apotando e = %x \n", **p_pont_x);
}*/