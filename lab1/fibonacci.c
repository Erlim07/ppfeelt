/**
* Arquivo: fibonacci.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Entre com u numero:");
    scanf("%d", &n);
    for(int i = 0, j = 0, k = 1, t; i < n; i++, t = j+k, j = k, k = t) printf("%d\n", j );


    return 0;
}