/**
* Arquivo: aproxpi.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/

#include <stdio.h>
double aproximadora(int n);


int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%lf\n", aproximadora(n));

    return 0;
}

double aproximadora(int n){
    if(n ==0) return 4;
    if(n%2) return aproximadora(n-1) -(double) 4/(2*n+1); else return aproximadora(n-1) +(double) 4/(2*n+1);
}