/**
* Arquivo: impares.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/
#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int i);

int main(void) {
    int inicio;
    int final;
    printf("Forneça um intervalo: ");
    scanf("%d %d", &inicio, &final);
    if((inicio+1)%2){
        printf("%i", inicio+1);
    }
    for(int i = inicio+2 ; i< final;i++){
        if(i%2){
            printf(", %i ", i);
        }
    }
    printf("\n");



}

bool ePrimo(int i){
    for(int j = 2; j< i; j++){
        if(i%j == 0){
            return false;
        }
    }
    return true;

}

