/**
* Arquivo: mdc.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/

#include <stdio.h>
int mdc(int a, int b);

int main(void){
    //so pegando os dados
    int a;
    int b;
    printf("Digite 2 numeros: ");
    scanf("%d %d", &a, &b);
    int resultado = mdc(a, b);

    printf("%d\n", resultado);


    return 1;
}

//definição recursiva de um mdc
int mdc(int a, int b){

    if(b==0) return a;
    mdc(b, a%b);
}