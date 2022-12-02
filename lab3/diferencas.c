/**
* Arquivo: diferencas.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:02/12/2022
*/

#include <stdio.h>

int main(void){
    int N;
    printf("Quantidade: ");
    scanf("%d", &N);

    float floats[N];
    for(int i = 0; i< N; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", floats+i);
    }
    //calcula diferenças
    float difs[N-1];
    for(int i = 0; i< N-1; i++){
        difs[i] = floats[i+1] - floats[i];
    }
    //maior e menor diferença
    float maior = difs[0];
    float menor = difs[0];
    for(int i=0; i < N-1; i++) {
        if(difs[i]>maior){
            maior = difs[i]; 
        }
        if(difs[i]<menor){
            menor = difs[i];
        }
    }

    printf("%g", difs[0]);
    for(int i = 1; i<N-1; i++){
        printf(", %g", difs[i]);
    }printf("\n");

    printf("max : %g\nmin: %g\n", maior, menor);

    return 1;
}