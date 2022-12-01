/**
* Arquivo: produtorio.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:01/12/2022
*/

#include <stdio.h>

int main(void){
    int N;
    printf("Quantidade: ");
    scanf("%d", &N);

    float vetor[N];
    float soma = 1;

    for(int i = 0; i < N; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", vetor+i);
        soma = soma * vetor[i];
    }

    printf("%g", vetor[0]);

    for(int i = 1; i < N; i++){
        printf(" * %g", vetor[i]);
    }
    printf(" = %g \n", soma);


    return 1;
}