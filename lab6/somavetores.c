/**
* Arquivo: inside.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:12/01/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool soma(int * v1, int tamanho1, int * v2, int tamanho2, int * resultado);


int main(void){

    int tam1, tam2;
    printf("Entrada 1: ");
    scanf("%d%*c", &tam1);
    printf("Entrada 2: ");
    scanf("%d%*c", &tam2);

    int * vet1 = (int *) malloc(sizeof(int)*tam1);
    int * vet2 = (int *) malloc(sizeof(int)*tam1);
    int * vet3 = (int *) malloc(sizeof(int)*tam1);

    for(int i = 0; i< tam1; i++){
        vet1[i] = 1 + 2*i;
    }

    for(int i = 0; i< tam2; i++){
        vet2[i] = 4*i;
    }

    if(soma(vet1, tam1, vet2, tam2, vet3)){
        for(int i = 0; i<tam1 -1; i++){
            printf("%d, ", vet3[i]);
        }
        printf("%d\n", vet3[tam1-1]);
    }else{
        printf("VETORES DE TAMANHO DIFERENTE\n");
    }

    free(vet1);
    free(vet2);
    free(vet3);
    return 1;
}


bool soma(int * v1, int tamanho1, int * v2, int tamanho2, int * resultado){
    if(tamanho1 == tamanho2){
        for(int i = 0; i<tamanho1; i++){
            resultado[i] = v1[i]+v2[i];
        }
        return true;
    }else{return false;}
}