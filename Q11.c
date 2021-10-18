#include<stdio.h>
#include<stdlib.h>

int main(){
int x, h;
int k, t, i, vet[20], s = 0;

    printf("Quantos alunos tem em sua sala? \n");
    scanf("%d", &x);

    printf("Digite as notas a seguir: \n");

    for(int y = 0; y < x; y++){
        scanf("%d", &vet[i]);
        s = s + vet[i];
        
    }
    t = (s/x);
    printf("%d", t);
return 0;
}