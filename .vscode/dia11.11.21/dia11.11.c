/*controle de energia em 3 eletrodomésticos */



#include <stdio.h>



struct produto{

	char nome[20];

	float potencia;

	float tempoDeAtividade;

	};



	typedef struct produto eletrodomestico;



	int main (){



		int i;

		int tempoD =0;

		eletrodomestico produtoS[3];



		for (i=0;i<3;i++){

			scanf ("%s \n", &produtoS[i].nome);

			scanf ("%f \n", &produtoS[i].potencia);

			scanf ("%f \n", &produtoS[i].tempoDeAtividade);



		}printf("Qual a quantidade de dias?\n") ;

		scanf("%d", &tempoD);

		for (i=0;i<3;i++){

			printf("%s \n", produtoS[i].nome);

			printf("%.2f \n", produtoS[i].potencia*produtoS[i].tempoDeAtividade*tempoD);

		}

		return 0;

	}
