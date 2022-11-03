/**
* Arquivo: somaDivisores.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/

#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int result = 0;
    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            result = result+i;
        }
    }
    printf("%d\n", result);
    return 0;
}