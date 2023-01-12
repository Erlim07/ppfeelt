/**
* Arquivo: inside.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:12/01/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int tam1, tam2;
    printf("Entrada 1: ");
    scanf("%d%*c", tam1);
    printf("Entrada 2: ");
    scanf("%d%*c", tam1);

    int * vet1 = (int *) malloc(sizeof(int)*tam1);
    int * vet2 = (int *) malloc(sizeof(int)*tam1);
    int * vet3 = (int *) malloc(sizeof(int)*tam1);


    return 1;
}


bool soma(int * v1, int tamanho1, int * v2, int tamanho2, int * resultado){
    if(tamanho1 == tamanho2){

        return true;
    }else{return false;}




}