/**
* Arquivo: minMax.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:01/12/2022
*/

#include <stdio.h>
#include <math.h>

float media(int N, float vetor[]);
float desvpad(int N, float vetor[], float med);

int main(void){
    int N;
    printf("Quantidade: ");
    scanf("%d", &N);

    float vetor[N];
    for(int i = 0; i < N; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", vetor+i);
    }
    float mediaa = media(N, vetor);
    printf("media %g,", mediaa);
    printf("desvio %f\n", desvpad(N, vetor, mediaa));


    return 1;
}


float media(int N, float vetor[]){
    float soma = 0;
    for(int i = 0; i<N; i++){
        soma = soma + vetor[i];
    }
    return soma/N;
}

float desvpad(int N, float vetor[], float med){
    float somaquad = 0;
    for(int i = 0; i<N; i++){
        somaquad = somaquad + pow(vetor[i]-med, 2);
    }
    return sqrt(somaquad/(N));
}