#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, c, a1 = 0, a2 = 0, a3 = 0; // tres armazenamentos
  float j, k, l = 0;                // total da media de a1: k

  printf("Qual e sua opniao sobre o filme? digite 1(otimo), 2(bom), 3(regular)");
  printf("Digite sua idade, tambem: \n");

  for (int y = 0; y < 15; y++)
  {
    printf("Digite sua opniao: \n");

    scanf("%d", &x); // vai receber 1, 2, 3

    if (x > 3)
    {
      printf("Error, renicie o processo, por favor \n");
      system("pause");
      return 0;
    }

    printf("Sua idade: \n");

    scanf("%d", &c);

    if (x == 1)
    {
      // a1 += 1;
      l += c;//cada valor digitado for correpondente ao if, e armazen.
    }
    else if (x == 2)
    {
      a2 += 1;//tbm quantidade de vezes
    }
    if (x == 3)
    {
      a3 += 1;//quantidade de vezes 
      // a3 = x;
    }
  }
  k = l / 15;
  j = ((a3 * 100) / 15);
  printf("A media da idade das pessoas que responderam Otimo: %.2f \n", k);
  printf("Quantidade de pessoas que respondeu Regular: %d \n", a2);
  printf("Porcentagem das pessoas que respondeu Bom: %.2f % \n", j);
}

// printf("Numeros armazenados em cada a1: %d \n, a2: %d \n, a3: %d", a1, a2, a3);
/*Esta atividade vale 2 pontos extras
e ela deve ser feita de maneira individual.
 Caso as programações estejam iguais,
  serão desconsideradas e atribuída nota 0.

Atividade:

Cada espectador de um cinema respondeu
 a um questionário no qual constava sua idade
e a sua opinião em relação ao filme: ótimo – 3; bom – 2; regular – 1.

Faça um algoritmo que receba a idade e
a opinião de 15 espectadores e que calcule
e mostre: A média das idades das pessoas
que responderam ótimo;
A quantidade de pessoas que respondeu regular;
A porcentagem de pessoas que respondeu bom entre
 todos os espectadores analisados.

*/