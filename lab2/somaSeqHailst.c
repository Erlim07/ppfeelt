/**
* Arquivo: somaSeqHailst.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/
#include <stdio.h>

int main(void){
    int entrada;
    printf("Forneca um numero: ");
    scanf("%d", &entrada);

    int resultado = entrada;

    while(entrada != 1){
        if(entrada%2 == 1){
            entrada = 3* entrada + 1;
            resultado = resultado + entrada;
        }else{
            entrada = entrada/2;
            resultado = resultado + entrada;
        }
    }
    printf("%d\n", resultado);
    return 1;
}