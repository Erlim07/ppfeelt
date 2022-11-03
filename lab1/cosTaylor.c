/**
* Arquivo: cosTaylor.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/

#ifdef M_PI
  #undef M_PI
  #define M_PI 3.141592653589793115997963468544185161590576171875
#endif

#include <stdio.h>

int fatorial(int num);

int main(void){
    int n;
    double x;
    scanf("%d", &n);
    scanf("%f", &x);
    double resultado = 0.0; 
    for(int i = 0; i= n; i++){
        
    }

    return 0;
}


int fatorial(int num){
    unsigned long int result = 1;
    for(int i = 1; i<=num; i++){
        result = result * i; 
    }
    return result;
}