/*Criem um programa que exiba
quem foi a banda/musica (entre 3) mais tocada no spotfy durante 1 semana.  */


#include <stdio.h>

struct produto{

	char nome[20];//da banda

	float QH;// por quantas horas por dia foi escutada

	float QD;//por quantos dias seguidos

	};



	typedef struct musica;



	int main (){

		int i;

		int tempoD = 0;

		musica bandA[3];



		for (i=0;i<3;i++){

			scanf ("%s \n", &bandA[i].nome);

			scanf ("%f \n", &bandA[i].QH);

			scanf ("%f \n", &bandA[i].QD);



		}printf("Qual a quantidade de dias?\n") ;

		scanf("%d", &tempoD);

		for (i=0;i<3;i++){

			printf("%s \n", produtoS[i].nome);

			printf("%.2f \n", produtoS[i].Qh*produtoS[i].QD*tempoD);

		}

		return 0;

	}
