/**
* Arquivo: fatorial.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned int num;
    scanf("%lu", &num);
    unsigned long int result = 1;
    for(int i = 1; i<=num; i++){
        result = result * i; 
    }

    printf("%lu\n", result);

    return 0;
}