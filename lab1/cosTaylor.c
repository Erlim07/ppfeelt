/**
* Arquivo: cosTaylor.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/
#include <math.h>
#define PI 3.141592653589793115997963468544185161590576171875

#include <stdio.h>

int fatorial(int num);

int main(void){
    int n;
    float x;
    scanf("%d", &n);
    scanf("%f", &x);
    float resultado = 0.0; 
    for(int i = 0; i <= n; i++){
        resultado = resultado + pow(-1, i)*pow(x * PI, 2*i)/fatorial(2*i);
    }
    printf("%f\n", resultado);

    return 0;
}


int fatorial(int num){
    unsigned long int result = 1;
    for(int i = 1; i<=num; i++){
        result = result * i; 
    }
    return result;
}