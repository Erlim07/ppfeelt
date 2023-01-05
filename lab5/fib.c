/**
* Arquivo: fibonacci.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/

#include <stdio.h>
int fibonacci(int a);

int main(void){
    int a;
    printf("Digite um numero:");
    scanf("%d", &a);
    //faz o fibonacci chamando a func recursiva
    int resultado = fibonacci(a);
    printf("%d\n", resultado);
    
    return 1;
}

int fibonacci(int a){
    if(a == 0) return 0;
    if(a == 1 || a == 2) return 1;
    return fibonacci(a-1)+fibonacci(a-2);
}
