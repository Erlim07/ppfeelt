/**
* Arquivo: dec2bin.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:09/12/2022
*/


#include <stdio.h>

int main(void){
    long long unsigned int numero;
    long long unsigned int numero2;

    printf("Manda um numero:");
    scanf("%llu", &numero);
    numero2 = numero;
    int tamanho = 0;
    while (numero2>0){
        numero2 = numero2>>1;
        tamanho++;
    }
    int numeroB[tamanho];
    for(int i =0; i < tamanho; i++){
        numeroB[tamanho-i-1] = numero%2;
        numero = numero>>1;
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d", numeroB[i]);
    }
    printf("\n");








    return 0;
}