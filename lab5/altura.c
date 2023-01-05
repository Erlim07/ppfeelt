/**
* Arquivo: altura.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/

#include <stdio.h>
int tocm(int num);

//typedef de preguicoso
typedef 
    struct altura
    {
        int metros, centimetros;
    }
altura;

int main(void){
    altura alt;

    printf("Passa a altura(Metros. centimetros): ");
    scanf("%d. %d", &alt.metros, &alt.centimetros);
    //organiza a entrada do usuário
    alt.centimetros = tocm(alt.centimetros);

    printf("Altura %dm %d\n", alt.metros, alt.centimetros);

    return 1;
}

//passa qlqr tralha q o usuario passar pra cm msm
int tocm(int num){
    if(num<10) return num*10;
    if(num>99) return num/10;
    return num;
}