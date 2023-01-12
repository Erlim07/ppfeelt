/**
* Arquivo: inside.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:12/01/2023
*/

#include <stdio.h>
#include <stdlib.h>


typedef
    long long int 
lli;

lli mean(int * vetor, int num);


int main(void){
    int num, inicial;
    printf("Entre com um numero: ");
    scanf("%d%*c", &num);
    printf("Me de seu inicial: ");
    scanf("%d%*c", &inicial);

    if(!(inicial%2)) inicial ++;

    int * vetor = (int *) malloc(sizeof(int)*(num));

    for(int i = 0; i< num; i++) vetor[i] = inicial+ i*2;

    printf("Penúltimo %d\t", vetor[num-2]);
    printf("Media %d\n", mean(vetor, num));

    
    free(vetor);
    return 0;
}

lli mean(int * vetor, int num){
    lli soma = 0;
    for(int i = 0; i< num; i++) soma += vetor[i];
    return soma/num;
}