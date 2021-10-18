#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float l, t, t1;
    int x;

    printf("Digita qual dos tres quer saber: 1Condominio, 2industria, 3comercio: \n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        t = 24 * 0.60;
        t1 = t * 30;
        printf("Valor no final do mes: %.2f", t1); //%.2 é limite de n° depois da vírgula
        break;
    case 2:
        t = 24 * 0.48;
        t1 = t * 30;
        printf("Valor no final do mes: %.2f", t1);
        break;
    case 3:
        t = 24 * 1.29;
        t1 = t * 30;
        printf("Valor no final do mes: %.2f", t1);
        break;

    default:
        break;
    }
return 0;
}