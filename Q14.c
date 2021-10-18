#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x, y, i, k = 0;

    printf("Digita o preco de custo e venda \n");
    scanf("%f \n %f", &x, &y); // custo & venda

    for (int u = 0; u < 100; u++)
    {
        k += y;
    }
    if (x < y)
    {
        printf(" o valor total de lucro: %.2f reais", k);
    }
    else if (x > y)
    {
        printf("Seu valor nao tera lucro, o valor: %.2f", k);
    }

    return 0;
}