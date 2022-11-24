/**
* Arquivo: somaPrimos.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/
#include <stdio.h>

int main(void){
    int inicio, fim;
    printf("Forneça um intervalo: ");
    scanf("%d %d", &inicio, &fim);
    int soma = 0;
    for(int i = inicio; i<=fim; i++){
        int j;
        int add = i;
        if(i == 1) add= 0;
        for(j = 2; j<i; j++){
            if(i%j == 0){
                add = 0;
            } 
        }
        soma = soma + add;
    }

    printf("%d\n", soma);
    return 1;
}