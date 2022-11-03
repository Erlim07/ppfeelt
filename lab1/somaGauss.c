/**
* Arquivo:somaGauss.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em: 03/11/2022
*/


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num); 
    int somaG = ((1+ num)*num)/2;
    printf("%d\n", somaG);
 return EXIT_SUCCESS;
}
