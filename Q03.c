#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("digita 10 numeros: \n");
    for(a = 0; a <= 10; a++)
    {
        
        scanf("%d", &a);
        
         if(a % 2 == 0){
            printf("valor par\n", a);
            
        }
        if(a % 2 == 1){
            printf("valor impar\n", a);
        }

            
    }
    //system("pause");
    return 0;



}
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, x, i;

    printf("aperta a tecla b para mostra 10 numeros pares e impares: \n");
    while (a <= 10)
    {
        
        scanf("%d \n", &a);
        
         if(a % 2 == 0){
            printf("valor par => %d \n", a);
            a++;
        }
        if(a % 2 == 1){
            printf("valor impar => %d \n", a);
            a++;
        }
            
    }
    system("pause");
    return 0;
}*/